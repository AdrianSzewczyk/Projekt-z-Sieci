/********************************************************************************
** Form generated from reading UI file 'oknoregulator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOREGULATOR_H
#define UI_OKNOREGULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_OknoRegulator
{
public:
    QDialogButtonBox *ZatwierdzenieUstawien;
    QLabel *NastawaIopis;
    QDoubleSpinBox *Wzmocnienie;
    QLabel *label_13;
    QDoubleSpinBox *StalaD;
    QDoubleSpinBox *StalaI;
    QLabel *label_14;
    QLabel *NastawaDopis;
    QLabel *NastawaPopis;
    QLabel *label_12;

    void setupUi(QDialog *OknoRegulator)
    {
        if (OknoRegulator->objectName().isEmpty())
            OknoRegulator->setObjectName("OknoRegulator");
        OknoRegulator->resize(400, 300);
        ZatwierdzenieUstawien = new QDialogButtonBox(OknoRegulator);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        ZatwierdzenieUstawien->setGeometry(QRect(-70, 220, 341, 32));
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Horizontal);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        NastawaIopis = new QLabel(OknoRegulator);
        NastawaIopis->setObjectName("NastawaIopis");
        NastawaIopis->setGeometry(QRect(90, 120, 81, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        NastawaIopis->setFont(font);
        NastawaIopis->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Wzmocnienie = new QDoubleSpinBox(OknoRegulator);
        Wzmocnienie->setObjectName("Wzmocnienie");
        Wzmocnienie->setGeometry(QRect(170, 60, 112, 31));
        label_13 = new QLabel(OknoRegulator);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(170, 100, 112, 17));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);
        StalaD = new QDoubleSpinBox(OknoRegulator);
        StalaD->setObjectName("StalaD");
        StalaD->setGeometry(QRect(170, 180, 112, 31));
        StalaI = new QDoubleSpinBox(OknoRegulator);
        StalaI->setObjectName("StalaI");
        StalaI->setGeometry(QRect(170, 120, 112, 31));
        label_14 = new QLabel(OknoRegulator);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(170, 160, 131, 21));
        label_14->setFont(font);
        NastawaDopis = new QLabel(OknoRegulator);
        NastawaDopis->setObjectName("NastawaDopis");
        NastawaDopis->setGeometry(QRect(90, 180, 81, 31));
        NastawaDopis->setFont(font);
        NastawaDopis->setAlignment(Qt::AlignmentFlag::AlignCenter);
        NastawaPopis = new QLabel(OknoRegulator);
        NastawaPopis->setObjectName("NastawaPopis");
        NastawaPopis->setGeometry(QRect(90, 60, 81, 31));
        NastawaPopis->setFont(font);
        label_12 = new QLabel(OknoRegulator);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(170, 40, 112, 17));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(OknoRegulator);
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::accepted, OknoRegulator, qOverload<>(&QDialog::accept));
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::rejected, OknoRegulator, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OknoRegulator);
    } // setupUi

    void retranslateUi(QDialog *OknoRegulator)
    {
        OknoRegulator->setWindowTitle(QCoreApplication::translate("OknoRegulator", "Dialog", nullptr));
        NastawaIopis->setText(QCoreApplication::translate("OknoRegulator", "Nastawa I", nullptr));
        label_13->setText(QCoreApplication::translate("OknoRegulator", "Sta\305\202a Ca\305\202kuj\304\205ca", nullptr));
        label_14->setText(QCoreApplication::translate("OknoRegulator", "Sta\305\202a R\303\263\305\274niczkuj\304\205ca", nullptr));
        NastawaDopis->setText(QCoreApplication::translate("OknoRegulator", "Nastawa D", nullptr));
        NastawaPopis->setText(QCoreApplication::translate("OknoRegulator", "Nastawa P", nullptr));
        label_12->setText(QCoreApplication::translate("OknoRegulator", "Wzmocnienie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoRegulator: public Ui_OknoRegulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOREGULATOR_H
