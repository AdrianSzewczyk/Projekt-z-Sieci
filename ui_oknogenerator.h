/********************************************************************************
** Form generated from reading UI file 'oknogenerator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOGENERATOR_H
#define UI_OKNOGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OknoGenerator
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QToolButton *RodzajeSygnalu;
    QHBoxLayout *horizontalLayout_3;
    QLabel *AmplitudaNapis;
    QDoubleSpinBox *Amplituda;
    QHBoxLayout *horizontalLayout_2;
    QLabel *WypelnienieNapis;
    QDoubleSpinBox *Wypelnienie;
    QHBoxLayout *horizontalLayout_4;
    QLabel *CzasAktywacjiNapis;
    QDoubleSpinBox *czasAktywacji;
    QHBoxLayout *horizontalLayout;
    QLabel *OkresNapis;
    QDoubleSpinBox *Okres;
    QDialogButtonBox *ZatwierdzenieUstawien;

    void setupUi(QDialog *OknoGenerator)
    {
        if (OknoGenerator->objectName().isEmpty())
            OknoGenerator->setObjectName("OknoGenerator");
        OknoGenerator->resize(189, 251);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(80);
        sizePolicy.setVerticalStretch(80);
        sizePolicy.setHeightForWidth(OknoGenerator->sizePolicy().hasHeightForWidth());
        OknoGenerator->setSizePolicy(sizePolicy);
        OknoGenerator->setMinimumSize(QSize(180, 239));
        OknoGenerator->setMaximumSize(QSize(500, 500));
        OknoGenerator->setBaseSize(QSize(80, 60));
        OknoGenerator->setModal(true);
        verticalLayout_3 = new QVBoxLayout(OknoGenerator);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        RodzajeSygnalu = new QToolButton(OknoGenerator);
        RodzajeSygnalu->setObjectName("RodzajeSygnalu");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(RodzajeSygnalu->sizePolicy().hasHeightForWidth());
        RodzajeSygnalu->setSizePolicy(sizePolicy1);
        RodzajeSygnalu->setMinimumSize(QSize(141, 31));
        QFont font;
        font.setBold(true);
        RodzajeSygnalu->setFont(font);

        verticalLayout->addWidget(RodzajeSygnalu);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        AmplitudaNapis = new QLabel(OknoGenerator);
        AmplitudaNapis->setObjectName("AmplitudaNapis");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(AmplitudaNapis->sizePolicy().hasHeightForWidth());
        AmplitudaNapis->setSizePolicy(sizePolicy2);
        AmplitudaNapis->setMinimumSize(QSize(81, 31));
        AmplitudaNapis->setFont(font);
        AmplitudaNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(AmplitudaNapis);

        Amplituda = new QDoubleSpinBox(OknoGenerator);
        Amplituda->setObjectName("Amplituda");
        sizePolicy1.setHeightForWidth(Amplituda->sizePolicy().hasHeightForWidth());
        Amplituda->setSizePolicy(sizePolicy1);
        Amplituda->setMinimumSize(QSize(61, 31));
        Amplituda->setFont(font);

        horizontalLayout_3->addWidget(Amplituda);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        WypelnienieNapis = new QLabel(OknoGenerator);
        WypelnienieNapis->setObjectName("WypelnienieNapis");
        sizePolicy2.setHeightForWidth(WypelnienieNapis->sizePolicy().hasHeightForWidth());
        WypelnienieNapis->setSizePolicy(sizePolicy2);
        WypelnienieNapis->setMinimumSize(QSize(81, 31));
        WypelnienieNapis->setFont(font);
        WypelnienieNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(WypelnienieNapis);

        Wypelnienie = new QDoubleSpinBox(OknoGenerator);
        Wypelnienie->setObjectName("Wypelnienie");
        sizePolicy1.setHeightForWidth(Wypelnienie->sizePolicy().hasHeightForWidth());
        Wypelnienie->setSizePolicy(sizePolicy1);
        Wypelnienie->setMinimumSize(QSize(61, 31));
        Wypelnienie->setFont(font);

        horizontalLayout_2->addWidget(Wypelnienie);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        CzasAktywacjiNapis = new QLabel(OknoGenerator);
        CzasAktywacjiNapis->setObjectName("CzasAktywacjiNapis");
        sizePolicy2.setHeightForWidth(CzasAktywacjiNapis->sizePolicy().hasHeightForWidth());
        CzasAktywacjiNapis->setSizePolicy(sizePolicy2);
        CzasAktywacjiNapis->setMinimumSize(QSize(81, 31));
        CzasAktywacjiNapis->setFont(font);

        horizontalLayout_4->addWidget(CzasAktywacjiNapis);

        czasAktywacji = new QDoubleSpinBox(OknoGenerator);
        czasAktywacji->setObjectName("czasAktywacji");
        sizePolicy1.setHeightForWidth(czasAktywacji->sizePolicy().hasHeightForWidth());
        czasAktywacji->setSizePolicy(sizePolicy1);
        czasAktywacji->setFont(font);

        horizontalLayout_4->addWidget(czasAktywacji);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        OkresNapis = new QLabel(OknoGenerator);
        OkresNapis->setObjectName("OkresNapis");
        sizePolicy2.setHeightForWidth(OkresNapis->sizePolicy().hasHeightForWidth());
        OkresNapis->setSizePolicy(sizePolicy2);
        OkresNapis->setMinimumSize(QSize(81, 31));
        OkresNapis->setFont(font);
        OkresNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(OkresNapis);

        Okres = new QDoubleSpinBox(OknoGenerator);
        Okres->setObjectName("Okres");
        sizePolicy1.setHeightForWidth(Okres->sizePolicy().hasHeightForWidth());
        Okres->setSizePolicy(sizePolicy1);
        Okres->setMinimumSize(QSize(61, 31));
        Okres->setFont(font);

        horizontalLayout->addWidget(Okres);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        ZatwierdzenieUstawien = new QDialogButtonBox(OknoGenerator);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ZatwierdzenieUstawien->sizePolicy().hasHeightForWidth());
        ZatwierdzenieUstawien->setSizePolicy(sizePolicy3);
        ZatwierdzenieUstawien->setMinimumSize(QSize(156, 24));
        ZatwierdzenieUstawien->setFont(font);
        ZatwierdzenieUstawien->setMouseTracking(true);
        ZatwierdzenieUstawien->setStyleSheet(QString::fromUtf8("color: white"));
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Horizontal);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_2->addWidget(ZatwierdzenieUstawien);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(OknoGenerator);
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::accepted, OknoGenerator, qOverload<>(&QDialog::accept));
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::rejected, OknoGenerator, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OknoGenerator);
    } // setupUi

    void retranslateUi(QDialog *OknoGenerator)
    {
        OknoGenerator->setWindowTitle(QCoreApplication::translate("OknoGenerator", "Dialog", nullptr));
        RodzajeSygnalu->setText(QCoreApplication::translate("OknoGenerator", "Rodzaje Sygna\305\202u", nullptr));
        AmplitudaNapis->setText(QCoreApplication::translate("OknoGenerator", "Amplituda", nullptr));
        WypelnienieNapis->setText(QCoreApplication::translate("OknoGenerator", "Wypelnienie", nullptr));
        CzasAktywacjiNapis->setText(QCoreApplication::translate("OknoGenerator", "Czas Aktywacji", nullptr));
        OkresNapis->setText(QCoreApplication::translate("OknoGenerator", "Okres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoGenerator: public Ui_OknoGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOGENERATOR_H
