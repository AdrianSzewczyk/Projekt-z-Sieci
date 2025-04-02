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
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_OknoGenerator
{
public:
    QDialogButtonBox *ZatwierdzenieUstawien;
    QToolButton *RodzajeSygnalu;
    QLabel *AmplitudaNapis;
    QLabel *WypelnienieNapis;
    QLabel *OkresNapis;
    QDoubleSpinBox *Amplituda;
    QDoubleSpinBox *Wypelnienie;
    QDoubleSpinBox *Okres;

    void setupUi(QDialog *OknoGenerator)
    {
        if (OknoGenerator->objectName().isEmpty())
            OknoGenerator->setObjectName("OknoGenerator");
        OknoGenerator->resize(328, 309);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(80);
        sizePolicy.setVerticalStretch(80);
        sizePolicy.setHeightForWidth(OknoGenerator->sizePolicy().hasHeightForWidth());
        OknoGenerator->setSizePolicy(sizePolicy);
        OknoGenerator->setMinimumSize(QSize(80, 60));
        OknoGenerator->setMaximumSize(QSize(500, 500));
        OknoGenerator->setBaseSize(QSize(80, 60));
        OknoGenerator->setModal(true);
        ZatwierdzenieUstawien = new QDialogButtonBox(OknoGenerator);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        ZatwierdzenieUstawien->setGeometry(QRect(40, 200, 191, 71));
        QFont font;
        font.setBold(true);
        ZatwierdzenieUstawien->setFont(font);
        ZatwierdzenieUstawien->setMouseTracking(true);
        ZatwierdzenieUstawien->setStyleSheet(QString::fromUtf8("color: white"));
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Horizontal);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        RodzajeSygnalu = new QToolButton(OknoGenerator);
        RodzajeSygnalu->setObjectName("RodzajeSygnalu");
        RodzajeSygnalu->setGeometry(QRect(80, 40, 141, 31));
        RodzajeSygnalu->setFont(font);
        AmplitudaNapis = new QLabel(OknoGenerator);
        AmplitudaNapis->setObjectName("AmplitudaNapis");
        AmplitudaNapis->setGeometry(QRect(80, 80, 81, 31));
        AmplitudaNapis->setFont(font);
        AmplitudaNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);
        WypelnienieNapis = new QLabel(OknoGenerator);
        WypelnienieNapis->setObjectName("WypelnienieNapis");
        WypelnienieNapis->setGeometry(QRect(80, 130, 81, 31));
        WypelnienieNapis->setFont(font);
        WypelnienieNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);
        OkresNapis = new QLabel(OknoGenerator);
        OkresNapis->setObjectName("OkresNapis");
        OkresNapis->setGeometry(QRect(80, 180, 71, 31));
        OkresNapis->setFont(font);
        OkresNapis->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Amplituda = new QDoubleSpinBox(OknoGenerator);
        Amplituda->setObjectName("Amplituda");
        Amplituda->setGeometry(QRect(170, 80, 61, 31));
        Amplituda->setFont(font);
        Wypelnienie = new QDoubleSpinBox(OknoGenerator);
        Wypelnienie->setObjectName("Wypelnienie");
        Wypelnienie->setGeometry(QRect(170, 130, 61, 31));
        Wypelnienie->setFont(font);
        Okres = new QDoubleSpinBox(OknoGenerator);
        Okres->setObjectName("Okres");
        Okres->setGeometry(QRect(170, 180, 61, 31));
        Okres->setFont(font);

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
        OkresNapis->setText(QCoreApplication::translate("OknoGenerator", "Okres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoGenerator: public Ui_OknoGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOGENERATOR_H
