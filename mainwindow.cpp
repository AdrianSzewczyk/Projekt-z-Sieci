#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "oknoobiektarx.h"
#include <QDebug>
#include <QMessageBox>
#include <QGraphicsDropShadowEffect>

std::random_device srng;
std::mt19937 rng;

MainWindow::MainWindow(QWidget *parent, WarstwaUslug *prog)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , simulationTimer(new QTimer(this))
    , usluga(prog)
    , czas(0.0)
{
    usluga->setGUI(this);
    ui->setupUi(this);
    UstawienieWygladuGUI();
    UstawienieLayout();
    UstawienieOkienOrazSygnalowIslotow();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete reg;
    reg=nullptr;
    delete gen;
    gen=nullptr;
}

void MainWindow::on_Start_clicked()
{
    usluga->SprawdzenieWszystkichDanych(interwalCzasowy);
}

void MainWindow::on_Stop_clicked()
{
    simulationTimer->stop();
}

void MainWindow::PokazWykres() {

    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresWartosciZadanej();
    });
    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresUchybu();
    });
    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresPID();
    });
    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresWartosciSterowania();
    });
    simulationTimer->start(interwalCzasowy);

}
void MainWindow::Blad(){
    QMessageBox::warning(this, "Ostrzeżenie", "Nie uzupełniłeś Wszystkich Danych");
}

void MainWindow::on_UstawieniaObiektuARX_clicked()
{
    okno_obiekt->exec();
}

void MainWindow::bladUstawien()
{
    QMessageBox::information(this, "Informacja", "Sprawdź czy poprawnie uzupełniłeś wszystkie dane");
}

void MainWindow::on_Reset_clicked() {
    disconnect(simulationTimer, nullptr, nullptr, nullptr);
    simulationTimer->stop();
    wykres->ResetujWykresy();
    wykres->ResetCzas();
    usluga->ResetSymulacji(czas);
    wykres->InicjalizujWykresy(layout);
}

void MainWindow::obslugaZapisu()
{
    QMessageBox::information(this, "Zapis konfiguracji", "Konfiguracja została zapisana.");
}

void MainWindow::on_Zapisz_clicked()
{
    usluga->zapiszKonfiguracje();
    QMessageBox::information(this, "Sukces", "Konfiguracja została zapisana.");
}

void MainWindow::on_Wczytaj_clicked()
{
    usluga->wczytajKonfiguracje();
    QMessageBox::information(this, "Sukces", "Konfiguracja została wczytana.");
}

void MainWindow::UstawienieOkienOrazSygnalowIslotow(){
    wykres = new Wykresy(this,usluga->getSymulator());
    okno_obiekt = new OknoObiektARX(this);
    okno_obiekt->setWarstwaUslug(usluga);
    reg = new Regulator;
    gen = new Generator;
    ui->Sposob->addAction("Stała w Sumie");
    ui->Sposob->addAction("Stała przed Sumą");
    ui->RodzajSygnalu->addAction("Skokowy");
    ui->RodzajSygnalu->addAction("Prostokątny");
    ui->RodzajSygnalu->addAction("Sinusoidalny");
    //Generator
    ui->Amplituda->setRange(-100, 1000);
    ui->Okres->setRange(0, 1000);
    ui->Wypelnienie->setRange(0, 1);
    ui->Amplituda->setSingleStep(0.1);
    ui->Wypelnienie->setSingleStep(0.05);
    ui->CzasAktywacji->setRange(0,500);
    ui->CzasAktywacji->setSingleStep(0.5);
    ui->Amplituda->setValue(66);
    ui->Okres->setValue(100);
    ui->Wypelnienie->setValue(0.6);
    ui->RodzajSygnalu->setText("Prostokątny");

    //Regulator
    ui->Wzmocnienie->setRange(0, 1000);
    ui->Wzmocnienie->setValue(0.1);
    ui->StalaI->setRange(0, 1000);
    ui->StalaI->setValue(5);
    ui->StalaD->setRange(0, 1000);
    ui->StalaD->setValue(0.1);
    ui->Wzmocnienie->setSingleStep(0.1);
    ui->StalaI->setSingleStep(0.1);
    ui->StalaD->setSingleStep(0.1);
    ui->Sposob->setText("Stała w Sumie");

    this->showMaximized();
    simulationTimer = new QTimer(this);
    wykres->InicjalizujWykresy(layout);
    connect(usluga, &WarstwaUslug::PoprawneDane, this, &MainWindow::PokazWykres);
    connect(usluga, &WarstwaUslug::BledneDane, this, &MainWindow::Blad);
    connect(usluga, &WarstwaUslug::sygnalZapisano, this, &MainWindow::obslugaZapisu);
    Wczytaj = new QPushButton("Wczytaj konfigurację", this);
    connect(Wczytaj, &QPushButton::clicked, this, &MainWindow::on_Wczytaj_clicked);
    connect(usluga, &WarstwaUslug::blad, this, &MainWindow::bladUstawien);
    ui->Interwal->setText("100");
    interwalCzasowy=100;
}

void MainWindow::UstawienieLayout(){
    for(int i=0;i<4;i++){
        layout[i] = new QVBoxLayout(this);
        layout[i]->setContentsMargins(0, 0, 0, 0);
    }
    ui->wykresWarZad->setLayout(layout[0]);
    ui->WykUchyb->setLayout(layout[1]);
    ui->WykPID->setLayout(layout[2]);
    ui->WykSter->setLayout(layout[3]);
}


void MainWindow::UstawienieWygladuGUI(){
    QString buttonStyleStart =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: green;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";
    QString buttonStyleStop =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: red;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";
    QString buttonStyleWczytaj =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: deepskyblue;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";
    QString buttonStyleReset =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: orange;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";
    QString buttonStyleReszta =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: grey;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";
    QString GeneratorIregulatorNapis =
        "QLabel {"
        "    color: white;"
        "    border: 2px solid black;"
        "    background-color: grey;"

         "}";


    this->setStyleSheet(
        "QWidget { color: white; }"
        "QMainWindow { background-color: rgb(90,90,90); }"
        );
    this->setStyleSheet(
        "QMessageBox { color: black; "
        "background-color: grey;"
        "}"
        "QMainWindow { background-color: rgb(90,90,90); }"
        );
    ui->Interwal->setStyleSheet(
        "QLineEdit {"
        "    background-color: white;"
        "    color: black;"
        "}"
        );
    ui->RegulatorNapis->setStyleSheet(GeneratorIregulatorNapis);
    ui->GeneratorNapis->setStyleSheet(GeneratorIregulatorNapis);
    ui->Start->setStyleSheet(buttonStyleStart);
    ui->Stop->setStyleSheet(buttonStyleStop);
    ui->Reset->setStyleSheet(buttonStyleReset);
    ui->Wczytaj->setStyleSheet(buttonStyleWczytaj);
    ui->UstawieniaObiektuARX->setStyleSheet(buttonStyleReszta);
    ui->Zapisz->setStyleSheet(buttonStyleStart);

    ui->TytulWykres1->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulWykres2->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulWykres3->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulWykres4->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulGlowny->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
    ui->InterwalCzasowyLabel->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );


    QGraphicsDropShadowEffect *effect[8]; //

    for (int i = 0; i < 8; ++i) {
        effect[i] = new QGraphicsDropShadowEffect();
        effect[i]->setOffset(0, 0);
        effect[i]->setBlurRadius(10);
        effect[i]->setColor(Qt::black);
    }
    ui->Start->setGraphicsEffect(effect[0]);
    ui->Stop->setGraphicsEffect(effect[1]);
    ui->Reset->setGraphicsEffect(effect[2]);
    ui->UstawieniaObiektuARX->setGraphicsEffect(effect[4]);
    ui->Zapisz->setGraphicsEffect(effect[6]);
    ui->Wczytaj->setGraphicsEffect(effect[7]);
}

//Generator

void MainWindow::on_Amplituda_editingFinished()
{
    gen->setAmplituda(ui->Amplituda->value());
    usluga->getSymulator()->getGenerator().setAmplituda(ui->Amplituda->value());
}
void MainWindow::on_Wypelnienie_editingFinished()
{
    gen->setWypelnienie(ui->Wypelnienie->value());
    usluga->getSymulator()->getGenerator().setWypelnienie(ui->Wypelnienie->value());
}
void MainWindow::on_CzasAktywacji_editingFinished()
{
    gen->setCzasAktywacji(ui->CzasAktywacji->value());
    usluga->getSymulator()->getGenerator().setWypelnienie(ui->CzasAktywacji->value());
}
void MainWindow::on_Okres_editingFinished()
{
    gen->setOkres(ui->Okres->value());
    usluga->getSymulator()->getGenerator().setOkres(ui->Okres->value());
}

//Regulator

void MainWindow::on_Wzmocnienie_editingFinished()
{
    reg->setWzmocnienie(ui->Wzmocnienie->value());
    usluga->getSymulator()->getRegulator().setWzmocnienie(ui->Wzmocnienie->value());
}
void MainWindow::on_StalaI_editingFinished()
{
    reg->setStalaI(ui->StalaI->value());
    usluga->getSymulator()->getRegulator().setStalaI(ui->StalaI->value());
}
void MainWindow::on_StalaD_editingFinished()
{
    reg->setStalaD(ui->StalaD->value());
    usluga->getSymulator()->getRegulator().setStalaD(ui->StalaD->value());
}


void MainWindow::on_Interwal_editingFinished()
{
    int interwal = ui->Interwal->text().toInt();
    if(interwal>0){
        interwalCzasowy=interwal;
    }
}
void MainWindow::on_RodzajSygnalu_clicked()
{
    ui->RodzajSygnalu->showMenu();
}
void MainWindow::on_RodzajSygnalu_triggered(QAction *arg1)
{
    QString wybor = arg1->text();
    if (wybor == "Skokowy") {
        gen->setRodzaj(RodzajSygnalu::Skok);
        usluga->getSymulator()->getGenerator().setRodzaj(RodzajSygnalu::Skok);
        ui->RodzajSygnalu->setText("Skokowy");
    } else if (wybor == "Sinusoidalny") {
        gen->setRodzaj(RodzajSygnalu::Sinusoida);
        usluga->getSymulator()->getGenerator().setRodzaj(RodzajSygnalu::Sinusoida);
        ui->RodzajSygnalu->setText("Sinusoidalny");
    } else if (wybor == "Prostokątny") {
        gen->setRodzaj(RodzajSygnalu::Prostokatny);
        usluga->getSymulator()->getGenerator().setRodzaj(RodzajSygnalu::Prostokatny);
        ui->RodzajSygnalu->setText("Prostokątny");
    }
}
void MainWindow::on_Sposob_clicked()
{
    ui->Sposob->showMenu();
}
void MainWindow::on_Sposob_triggered(QAction *arg1)
{
    QString wybor = arg1->text();
    if(wybor=="Stała przed Sumą"){
        reg->setCalkowanieWsumie(false);
        usluga->getSymulator()->getRegulator().setCalkowanieWsumie(false);
        ui->Sposob->setText("Stała przed Sumą");
    }else if(wybor=="Stała w Sumie"){
        reg->setCalkowanieWsumie(true);
        usluga->getSymulator()->getRegulator().setCalkowanieWsumie(true);
        ui->Sposob->setText("Stała w Sumie");
    }
}



