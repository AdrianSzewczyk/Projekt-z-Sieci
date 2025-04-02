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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OknoRegulator
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout;
    QLabel *NastawaPopis;
    QDoubleSpinBox *Wzmocnienie;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_2;
    QLabel *NastawaIopis;
    QDoubleSpinBox *StalaI;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_3;
    QLabel *NastawaDopis;
    QDoubleSpinBox *StalaD;
    QToolButton *Sposob;
    QDialogButtonBox *ZatwierdzenieUstawien;

    void setupUi(QDialog *OknoRegulator)
    {
        if (OknoRegulator->objectName().isEmpty())
            OknoRegulator->setObjectName("OknoRegulator");
        OknoRegulator->resize(233, 249);
        OknoRegulator->setMinimumSize(QSize(220, 222));
        OknoRegulator->setMaximumSize(QSize(500, 500));
        widget = new QWidget(OknoRegulator);
        widget->setObjectName("widget");
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_12);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        NastawaPopis = new QLabel(widget);
        NastawaPopis->setObjectName("NastawaPopis");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NastawaPopis->sizePolicy().hasHeightForWidth());
        NastawaPopis->setSizePolicy(sizePolicy);
        NastawaPopis->setFont(font);

        horizontalLayout->addWidget(NastawaPopis);

        Wzmocnienie = new QDoubleSpinBox(widget);
        Wzmocnienie->setObjectName("Wzmocnienie");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Wzmocnienie->sizePolicy().hasHeightForWidth());
        Wzmocnienie->setSizePolicy(sizePolicy1);
        Wzmocnienie->setMinimumSize(QSize(108, 0));

        horizontalLayout->addWidget(Wzmocnienie);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_13);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        NastawaIopis = new QLabel(widget);
        NastawaIopis->setObjectName("NastawaIopis");
        sizePolicy.setHeightForWidth(NastawaIopis->sizePolicy().hasHeightForWidth());
        NastawaIopis->setSizePolicy(sizePolicy);
        NastawaIopis->setMinimumSize(QSize(72, 22));
        NastawaIopis->setFont(font);
        NastawaIopis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(NastawaIopis);

        StalaI = new QDoubleSpinBox(widget);
        StalaI->setObjectName("StalaI");
        sizePolicy1.setHeightForWidth(StalaI->sizePolicy().hasHeightForWidth());
        StalaI->setSizePolicy(sizePolicy1);
        StalaI->setMinimumSize(QSize(108, 0));

        horizontalLayout_2->addWidget(StalaI);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_14 = new QLabel(widget);
        label_14->setObjectName("label_14");
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_14);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        NastawaDopis = new QLabel(widget);
        NastawaDopis->setObjectName("NastawaDopis");
        sizePolicy.setHeightForWidth(NastawaDopis->sizePolicy().hasHeightForWidth());
        NastawaDopis->setSizePolicy(sizePolicy);
        NastawaDopis->setMinimumSize(QSize(72, 0));
        NastawaDopis->setFont(font);
        NastawaDopis->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(NastawaDopis);

        StalaD = new QDoubleSpinBox(widget);
        StalaD->setObjectName("StalaD");
        sizePolicy1.setHeightForWidth(StalaD->sizePolicy().hasHeightForWidth());
        StalaD->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(StalaD);


        verticalLayout->addLayout(horizontalLayout_3);

        Sposob = new QToolButton(widget);
        Sposob->setObjectName("Sposob");
        sizePolicy1.setHeightForWidth(Sposob->sizePolicy().hasHeightForWidth());
        Sposob->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setBold(true);
        Sposob->setFont(font1);

        verticalLayout->addWidget(Sposob);


        verticalLayout_4->addLayout(verticalLayout);

        ZatwierdzenieUstawien = new QDialogButtonBox(widget);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Horizontal);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_4->addWidget(ZatwierdzenieUstawien);


        retranslateUi(OknoRegulator);
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::accepted, OknoRegulator, qOverload<>(&QDialog::accept));
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::rejected, OknoRegulator, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OknoRegulator);
    } // setupUi

    void retranslateUi(QDialog *OknoRegulator)
    {
        OknoRegulator->setWindowTitle(QCoreApplication::translate("OknoRegulator", "Dialog", nullptr));
        label_12->setText(QCoreApplication::translate("OknoRegulator", "Wzmocnienie", nullptr));
        NastawaPopis->setText(QCoreApplication::translate("OknoRegulator", "Nastawa P: ", nullptr));
        label_13->setText(QCoreApplication::translate("OknoRegulator", "Sta\305\202a Ca\305\202kuj\304\205ca", nullptr));
        NastawaIopis->setText(QCoreApplication::translate("OknoRegulator", "Nastawa I:   ", nullptr));
        label_14->setText(QCoreApplication::translate("OknoRegulator", "Sta\305\202a R\303\263\305\274niczkuj\304\205ca", nullptr));
        NastawaDopis->setText(QCoreApplication::translate("OknoRegulator", "Nastawa D: ", nullptr));
        Sposob->setText(QCoreApplication::translate("OknoRegulator", "Spos\303\263b Ca\305\202kowania", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoRegulator: public Ui_OknoRegulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOREGULATOR_H
