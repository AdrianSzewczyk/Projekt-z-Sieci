/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_12;
    QLabel *TytulGlowny;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QPushButton *Start;
    QSpacerItem *verticalSpacer;
    QPushButton *Stop;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Reset;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_6;
    QLabel *InterwalCzasowyLabel;
    QLineEdit *Interwal;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout;
    QWidget *wykresWarZad;
    QLabel *TytulWykres1;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *obramowanieGenerator;
    QLabel *GeneratorNapis;
    QToolButton *RodzajSygnalu;
    QHBoxLayout *horizontalLayout_8;
    QLabel *AmplitudaNapis;
    QDoubleSpinBox *Amplituda;
    QHBoxLayout *horizontalLayout_7;
    QLabel *WypelnienieNapis;
    QDoubleSpinBox *Wypelnienie;
    QHBoxLayout *horizontalLayout_6;
    QLabel *CzasNapis;
    QDoubleSpinBox *CzasAktywacji;
    QHBoxLayout *horizontalLayout_5;
    QLabel *OkresNapis;
    QDoubleSpinBox *Okres;
    QVBoxLayout *obramowanieRegulator;
    QVBoxLayout *verticalLayout_13;
    QLabel *RegulatorNapis;
    QLabel *WzmocnienieNapis;
    QHBoxLayout *horizontalLayout_9;
    QLabel *NastawaPopis;
    QDoubleSpinBox *Wzmocnienie;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_14;
    QLabel *StalaCNapis;
    QHBoxLayout *horizontalLayout_10;
    QLabel *NastawaIopis;
    QDoubleSpinBox *StalaI;
    QLabel *RozniczkaNapis;
    QHBoxLayout *horizontalLayout_11;
    QLabel *NastawaDopis;
    QDoubleSpinBox *StalaD;
    QToolButton *Sposob;
    QPushButton *UstawieniaObiektuARX;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *WykUchyb;
    QLabel *TytulWykres2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QWidget *WykPID;
    QLabel *TytulWykres3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *WykSter;
    QLabel *TytulWykres4;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_9;
    QPushButton *Zapisz;
    QPushButton *Wczytaj;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1845, 942);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_12 = new QHBoxLayout(centralwidget);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalSpacer_12 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_12);

        TytulGlowny = new QLabel(centralwidget);
        TytulGlowny->setObjectName("TytulGlowny");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TytulGlowny->sizePolicy().hasHeightForWidth());
        TytulGlowny->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        TytulGlowny->setFont(font);
        TytulGlowny->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(TytulGlowny);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        Start = new QPushButton(centralwidget);
        Start->setObjectName("Start");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Start->sizePolicy().hasHeightForWidth());
        Start->setSizePolicy(sizePolicy2);
        Start->setMinimumSize(QSize(150, 101));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        Start->setFont(font1);

        verticalLayout_5->addWidget(Start);

        verticalSpacer = new QSpacerItem(50, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        Stop = new QPushButton(centralwidget);
        Stop->setObjectName("Stop");
        sizePolicy2.setHeightForWidth(Stop->sizePolicy().hasHeightForWidth());
        Stop->setSizePolicy(sizePolicy2);
        Stop->setMinimumSize(QSize(150, 101));
        Stop->setFont(font1);

        verticalLayout_5->addWidget(Stop);

        verticalSpacer_2 = new QSpacerItem(50, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        Reset = new QPushButton(centralwidget);
        Reset->setObjectName("Reset");
        sizePolicy2.setHeightForWidth(Reset->sizePolicy().hasHeightForWidth());
        Reset->setSizePolicy(sizePolicy2);
        Reset->setMinimumSize(QSize(150, 101));
        Reset->setFont(font1);

        verticalLayout_5->addWidget(Reset);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_10);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        InterwalCzasowyLabel = new QLabel(centralwidget);
        InterwalCzasowyLabel->setObjectName("InterwalCzasowyLabel");
        sizePolicy2.setHeightForWidth(InterwalCzasowyLabel->sizePolicy().hasHeightForWidth());
        InterwalCzasowyLabel->setSizePolicy(sizePolicy2);
        InterwalCzasowyLabel->setMinimumSize(QSize(171, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        InterwalCzasowyLabel->setFont(font2);
        InterwalCzasowyLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(InterwalCzasowyLabel);

        Interwal = new QLineEdit(centralwidget);
        Interwal->setObjectName("Interwal");
        sizePolicy2.setHeightForWidth(Interwal->sizePolicy().hasHeightForWidth());
        Interwal->setSizePolicy(sizePolicy2);
        Interwal->setMinimumSize(QSize(140, 31));
        Interwal->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(Interwal);


        verticalLayout_5->addLayout(verticalLayout_6);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        wykresWarZad = new QWidget(centralwidget);
        wykresWarZad->setObjectName("wykresWarZad");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(wykresWarZad->sizePolicy().hasHeightForWidth());
        wykresWarZad->setSizePolicy(sizePolicy3);
        wykresWarZad->setMinimumSize(QSize(700, 351));

        verticalLayout->addWidget(wykresWarZad);

        TytulWykres1 = new QLabel(centralwidget);
        TytulWykres1->setObjectName("TytulWykres1");
        sizePolicy3.setHeightForWidth(TytulWykres1->sizePolicy().hasHeightForWidth());
        TytulWykres1->setSizePolicy(sizePolicy3);
        TytulWykres1->setMinimumSize(QSize(700, 51));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        TytulWykres1->setFont(font3);
        TytulWykres1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(TytulWykres1);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        obramowanieGenerator = new QVBoxLayout();
        obramowanieGenerator->setObjectName("obramowanieGenerator");
        GeneratorNapis = new QLabel(centralwidget);
        GeneratorNapis->setObjectName("GeneratorNapis");
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        GeneratorNapis->setFont(font4);
        GeneratorNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        obramowanieGenerator->addWidget(GeneratorNapis);

        RodzajSygnalu = new QToolButton(centralwidget);
        RodzajSygnalu->setObjectName("RodzajSygnalu");
        sizePolicy2.setHeightForWidth(RodzajSygnalu->sizePolicy().hasHeightForWidth());
        RodzajSygnalu->setSizePolicy(sizePolicy2);
        QFont font5;
        font5.setBold(true);
        RodzajSygnalu->setFont(font5);

        obramowanieGenerator->addWidget(RodzajSygnalu);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        AmplitudaNapis = new QLabel(centralwidget);
        AmplitudaNapis->setObjectName("AmplitudaNapis");
        AmplitudaNapis->setFont(font5);

        horizontalLayout_8->addWidget(AmplitudaNapis);

        Amplituda = new QDoubleSpinBox(centralwidget);
        Amplituda->setObjectName("Amplituda");
        Amplituda->setFont(font5);

        horizontalLayout_8->addWidget(Amplituda);


        obramowanieGenerator->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        WypelnienieNapis = new QLabel(centralwidget);
        WypelnienieNapis->setObjectName("WypelnienieNapis");
        WypelnienieNapis->setFont(font5);

        horizontalLayout_7->addWidget(WypelnienieNapis);

        Wypelnienie = new QDoubleSpinBox(centralwidget);
        Wypelnienie->setObjectName("Wypelnienie");
        Wypelnienie->setFont(font5);

        horizontalLayout_7->addWidget(Wypelnienie);


        obramowanieGenerator->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        CzasNapis = new QLabel(centralwidget);
        CzasNapis->setObjectName("CzasNapis");
        CzasNapis->setFont(font5);

        horizontalLayout_6->addWidget(CzasNapis);

        CzasAktywacji = new QDoubleSpinBox(centralwidget);
        CzasAktywacji->setObjectName("CzasAktywacji");
        CzasAktywacji->setFont(font5);

        horizontalLayout_6->addWidget(CzasAktywacji);


        obramowanieGenerator->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        OkresNapis = new QLabel(centralwidget);
        OkresNapis->setObjectName("OkresNapis");
        OkresNapis->setFont(font5);

        horizontalLayout_5->addWidget(OkresNapis);

        Okres = new QDoubleSpinBox(centralwidget);
        Okres->setObjectName("Okres");
        Okres->setFont(font5);

        horizontalLayout_5->addWidget(Okres);


        obramowanieGenerator->addLayout(horizontalLayout_5);


        verticalLayout_7->addLayout(obramowanieGenerator);

        obramowanieRegulator = new QVBoxLayout();
        obramowanieRegulator->setObjectName("obramowanieRegulator");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        RegulatorNapis = new QLabel(centralwidget);
        RegulatorNapis->setObjectName("RegulatorNapis");
        RegulatorNapis->setFont(font4);
        RegulatorNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(RegulatorNapis);

        WzmocnienieNapis = new QLabel(centralwidget);
        WzmocnienieNapis->setObjectName("WzmocnienieNapis");
        QFont font6;
        font6.setPointSize(9);
        font6.setBold(true);
        WzmocnienieNapis->setFont(font6);
        WzmocnienieNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(WzmocnienieNapis);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        NastawaPopis = new QLabel(centralwidget);
        NastawaPopis->setObjectName("NastawaPopis");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(NastawaPopis->sizePolicy().hasHeightForWidth());
        NastawaPopis->setSizePolicy(sizePolicy4);
        NastawaPopis->setMinimumSize(QSize(72, 0));
        NastawaPopis->setFont(font6);

        horizontalLayout_9->addWidget(NastawaPopis);

        Wzmocnienie = new QDoubleSpinBox(centralwidget);
        Wzmocnienie->setObjectName("Wzmocnienie");
        sizePolicy2.setHeightForWidth(Wzmocnienie->sizePolicy().hasHeightForWidth());
        Wzmocnienie->setSizePolicy(sizePolicy2);
        Wzmocnienie->setMinimumSize(QSize(0, 0));
        Wzmocnienie->setFont(font6);

        horizontalLayout_9->addWidget(Wzmocnienie);


        verticalLayout_13->addLayout(horizontalLayout_9);


        obramowanieRegulator->addLayout(verticalLayout_13);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        StalaCNapis = new QLabel(centralwidget);
        StalaCNapis->setObjectName("StalaCNapis");
        sizePolicy2.setHeightForWidth(StalaCNapis->sizePolicy().hasHeightForWidth());
        StalaCNapis->setSizePolicy(sizePolicy2);
        StalaCNapis->setFont(font6);
        StalaCNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14->addWidget(StalaCNapis);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        NastawaIopis = new QLabel(centralwidget);
        NastawaIopis->setObjectName("NastawaIopis");
        sizePolicy4.setHeightForWidth(NastawaIopis->sizePolicy().hasHeightForWidth());
        NastawaIopis->setSizePolicy(sizePolicy4);
        NastawaIopis->setMinimumSize(QSize(72, 22));
        NastawaIopis->setFont(font6);
        NastawaIopis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(NastawaIopis);

        StalaI = new QDoubleSpinBox(centralwidget);
        StalaI->setObjectName("StalaI");
        sizePolicy2.setHeightForWidth(StalaI->sizePolicy().hasHeightForWidth());
        StalaI->setSizePolicy(sizePolicy2);
        StalaI->setMinimumSize(QSize(0, 0));
        StalaI->setFont(font6);

        horizontalLayout_10->addWidget(StalaI);


        verticalLayout_14->addLayout(horizontalLayout_10);


        verticalLayout_15->addLayout(verticalLayout_14);

        RozniczkaNapis = new QLabel(centralwidget);
        RozniczkaNapis->setObjectName("RozniczkaNapis");
        RozniczkaNapis->setFont(font6);
        RozniczkaNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_15->addWidget(RozniczkaNapis);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        NastawaDopis = new QLabel(centralwidget);
        NastawaDopis->setObjectName("NastawaDopis");
        sizePolicy4.setHeightForWidth(NastawaDopis->sizePolicy().hasHeightForWidth());
        NastawaDopis->setSizePolicy(sizePolicy4);
        NastawaDopis->setMinimumSize(QSize(72, 0));
        NastawaDopis->setFont(font6);
        NastawaDopis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_11->addWidget(NastawaDopis);

        StalaD = new QDoubleSpinBox(centralwidget);
        StalaD->setObjectName("StalaD");
        sizePolicy2.setHeightForWidth(StalaD->sizePolicy().hasHeightForWidth());
        StalaD->setSizePolicy(sizePolicy2);
        StalaD->setFont(font6);

        horizontalLayout_11->addWidget(StalaD);


        verticalLayout_15->addLayout(horizontalLayout_11);

        Sposob = new QToolButton(centralwidget);
        Sposob->setObjectName("Sposob");
        sizePolicy2.setHeightForWidth(Sposob->sizePolicy().hasHeightForWidth());
        Sposob->setSizePolicy(sizePolicy2);
        Sposob->setFont(font6);

        verticalLayout_15->addWidget(Sposob);


        obramowanieRegulator->addLayout(verticalLayout_15);


        verticalLayout_7->addLayout(obramowanieRegulator);

        UstawieniaObiektuARX = new QPushButton(centralwidget);
        UstawieniaObiektuARX->setObjectName("UstawieniaObiektuARX");
        sizePolicy2.setHeightForWidth(UstawieniaObiektuARX->sizePolicy().hasHeightForWidth());
        UstawieniaObiektuARX->setSizePolicy(sizePolicy2);
        UstawieniaObiektuARX->setMinimumSize(QSize(140, 70));
        QFont font7;
        font7.setPointSize(15);
        font7.setBold(true);
        UstawieniaObiektuARX->setFont(font7);

        verticalLayout_7->addWidget(UstawieniaObiektuARX);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_2);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_9->addItem(verticalSpacer_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(180, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        WykUchyb = new QWidget(centralwidget);
        WykUchyb->setObjectName("WykUchyb");
        sizePolicy1.setHeightForWidth(WykUchyb->sizePolicy().hasHeightForWidth());
        WykUchyb->setSizePolicy(sizePolicy1);
        WykUchyb->setMinimumSize(QSize(311, 251));
        WykUchyb->setBaseSize(QSize(311, 251));

        verticalLayout_2->addWidget(WykUchyb);

        TytulWykres2 = new QLabel(centralwidget);
        TytulWykres2->setObjectName("TytulWykres2");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(TytulWykres2->sizePolicy().hasHeightForWidth());
        TytulWykres2->setSizePolicy(sizePolicy5);
        TytulWykres2->setMinimumSize(QSize(311, 51));
        QFont font8;
        font8.setPointSize(18);
        font8.setBold(true);
        TytulWykres2->setFont(font8);
        TytulWykres2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(TytulWykres2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        WykPID = new QWidget(centralwidget);
        WykPID->setObjectName("WykPID");
        sizePolicy1.setHeightForWidth(WykPID->sizePolicy().hasHeightForWidth());
        WykPID->setSizePolicy(sizePolicy1);
        WykPID->setMinimumSize(QSize(311, 251));
        WykPID->setBaseSize(QSize(311, 251));

        verticalLayout_3->addWidget(WykPID);

        TytulWykres3 = new QLabel(centralwidget);
        TytulWykres3->setObjectName("TytulWykres3");
        sizePolicy5.setHeightForWidth(TytulWykres3->sizePolicy().hasHeightForWidth());
        TytulWykres3->setSizePolicy(sizePolicy5);
        TytulWykres3->setMinimumSize(QSize(311, 51));
        TytulWykres3->setFont(font8);
        TytulWykres3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(TytulWykres3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        WykSter = new QWidget(centralwidget);
        WykSter->setObjectName("WykSter");
        sizePolicy1.setHeightForWidth(WykSter->sizePolicy().hasHeightForWidth());
        WykSter->setSizePolicy(sizePolicy1);
        WykSter->setMinimumSize(QSize(311, 251));
        WykSter->setBaseSize(QSize(311, 251));

        verticalLayout_4->addWidget(WykSter);

        TytulWykres4 = new QLabel(centralwidget);
        TytulWykres4->setObjectName("TytulWykres4");
        sizePolicy5.setHeightForWidth(TytulWykres4->sizePolicy().hasHeightForWidth());
        TytulWykres4->setSizePolicy(sizePolicy5);
        TytulWykres4->setMinimumSize(QSize(311, 51));
        TytulWykres4->setFont(font8);
        TytulWykres4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(TytulWykres4);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);


        horizontalLayout_3->addLayout(verticalLayout_4);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalSpacer_9 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_9);

        Zapisz = new QPushButton(centralwidget);
        Zapisz->setObjectName("Zapisz");
        sizePolicy2.setHeightForWidth(Zapisz->sizePolicy().hasHeightForWidth());
        Zapisz->setSizePolicy(sizePolicy2);
        Zapisz->setMinimumSize(QSize(171, 80));
        Zapisz->setFont(font7);

        verticalLayout_8->addWidget(Zapisz);

        Wczytaj = new QPushButton(centralwidget);
        Wczytaj->setObjectName("Wczytaj");
        sizePolicy2.setHeightForWidth(Wczytaj->sizePolicy().hasHeightForWidth());
        Wczytaj->setSizePolicy(sizePolicy2);
        Wczytaj->setMinimumSize(QSize(171, 80));
        Wczytaj->setFont(font7);

        verticalLayout_8->addWidget(Wczytaj);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);


        horizontalLayout_4->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout_4);


        verticalLayout_10->addLayout(verticalLayout_9);


        horizontalLayout_12->addLayout(verticalLayout_10);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1845, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        TytulGlowny->setText(QCoreApplication::translate("MainWindow", "Symulator Uk\305\202adu Automatycznej Regulacji", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        InterwalCzasowyLabel->setText(QCoreApplication::translate("MainWindow", "Interwa\305\202 Czasowy", nullptr));
        Interwal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        TytulWykres1->setText(QCoreApplication::translate("MainWindow", "Warto\305\233\304\207 Zadana i Regulowana", nullptr));
        GeneratorNapis->setText(QCoreApplication::translate("MainWindow", "Generator", nullptr));
        RodzajSygnalu->setText(QCoreApplication::translate("MainWindow", "Rodzaj Sygna\305\202u", nullptr));
        AmplitudaNapis->setText(QCoreApplication::translate("MainWindow", "Amplituda: ", nullptr));
        WypelnienieNapis->setText(QCoreApplication::translate("MainWindow", "Wype\305\202nienie: ", nullptr));
        CzasNapis->setText(QCoreApplication::translate("MainWindow", "Czas Aktywacji: ", nullptr));
        OkresNapis->setText(QCoreApplication::translate("MainWindow", "Okres:", nullptr));
        RegulatorNapis->setText(QCoreApplication::translate("MainWindow", "Regulator", nullptr));
        WzmocnienieNapis->setText(QCoreApplication::translate("MainWindow", "Wzmocnienie", nullptr));
        NastawaPopis->setText(QCoreApplication::translate("MainWindow", "Nastawa P: ", nullptr));
        StalaCNapis->setText(QCoreApplication::translate("MainWindow", "Sta\305\202a Ca\305\202kuj\304\205ca", nullptr));
        NastawaIopis->setText(QCoreApplication::translate("MainWindow", "Nastawa I:   ", nullptr));
        RozniczkaNapis->setText(QCoreApplication::translate("MainWindow", "Sta\305\202a R\303\263\305\274niczkuj\304\205ca", nullptr));
        NastawaDopis->setText(QCoreApplication::translate("MainWindow", "Nastawa D: ", nullptr));
        Sposob->setText(QCoreApplication::translate("MainWindow", "Spos\303\263b Ca\305\202kowania", nullptr));
        UstawieniaObiektuARX->setText(QCoreApplication::translate("MainWindow", "Obiekt ARX", nullptr));
        TytulWykres2->setText(QCoreApplication::translate("MainWindow", "Warto\305\233\304\207 Uchybu Regulacji", nullptr));
        TytulWykres3->setText(QCoreApplication::translate("MainWindow", "Warto\305\233ci Regulatora PID", nullptr));
        TytulWykres4->setText(QCoreApplication::translate("MainWindow", "Warto\305\233\304\207 Steruj\304\205ca", nullptr));
        Zapisz->setText(QCoreApplication::translate("MainWindow", "Zapisz", nullptr));
        Wczytaj->setText(QCoreApplication::translate("MainWindow", "Wczytaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
