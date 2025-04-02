#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "wykresy.h"
#include <QMainWindow>
#include <QTimer>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include "warstwauslug.h"
#include "oknoobiektarx.h"
#include <QFileDialog>
#include <QTextStream>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
class WarstwaUslug;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr,
               WarstwaUslug* program = nullptr);
    ~MainWindow();
    void UstawienieWygladuGUI();
    void UstawienieOkienOrazSygnalowIslotow();

private slots:
    void on_Start_clicked();
    void on_Stop_clicked();
    void on_UstawieniaObiektuARX_clicked();
    void PokazWykres();
    void Blad();
    void on_Reset_clicked();
    void on_Zapisz_clicked();
    void on_Wczytaj_clicked();
    void bladUstawien();
    void on_Amplituda_editingFinished();
    void on_Wypelnienie_editingFinished();
    void on_CzasAktywacji_editingFinished();
    void on_Okres_editingFinished();
    void on_Wzmocnienie_editingFinished();
    void on_StalaI_editingFinished();
    void on_StalaD_editingFinished();
    void on_Interwal_editingFinished();
    void on_RodzajSygnalu_clicked();
    void on_RodzajSygnalu_triggered(QAction *arg1);
    void on_Sposob_clicked();
    void on_Sposob_triggered(QAction *arg1);
private:
    Ui::MainWindow *ui;
    QTimer *simulationTimer;
    WarstwaUslug* usluga ;
    OknoObiektARX* okno_obiekt;
    double czas;
    int interwalCzasowy=0;
    Wykresy* wykres;
    void UstawienieLayout();
    QVBoxLayout *layout[4];
    void obslugaZapisu();
    QPushButton *Wczytaj;
    Regulator* reg;
    Generator* gen;
};
#endif // MAINWINDOW_H
