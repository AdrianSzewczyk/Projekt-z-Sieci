/********************************************************************************
** Form generated from reading UI file 'oknoobiektarx.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOOBIEKTARX_H
#define UI_OKNOOBIEKTARX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OknoObiektARX
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *ALebel;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *A1;
    QDoubleSpinBox *A2;
    QDoubleSpinBox *A3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Blebel;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *B1;
    QDoubleSpinBox *B2;
    QDoubleSpinBox *B3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *OpoznienieLabel;
    QDoubleSpinBox *Opoznienie;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *ZaklocenieLabel;
    QCheckBox *Zaklocenie;
    QLabel *ZakresNapis;
    QDoubleSpinBox *mean;
    QDoubleSpinBox *stdev;
    QDialogButtonBox *ZatwierdzenieUstawien;

    void setupUi(QDialog *OknoObiektARX)
    {
        if (OknoObiektARX->objectName().isEmpty())
            OknoObiektARX->setObjectName("OknoObiektARX");
        OknoObiektARX->resize(279, 266);
        OknoObiektARX->setMinimumSize(QSize(250, 239));
        OknoObiektARX->setMaximumSize(QSize(500, 500));
        verticalLayout_4 = new QVBoxLayout(OknoObiektARX);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_7 = new QLabel(OknoObiektARX);
        label_7->setObjectName("label_7");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(219, 22));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        ALebel = new QLabel(OknoObiektARX);
        ALebel->setObjectName("ALebel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ALebel->sizePolicy().hasHeightForWidth());
        ALebel->setSizePolicy(sizePolicy1);
        ALebel->setMinimumSize(QSize(31, 21));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        ALebel->setFont(font1);
        ALebel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(ALebel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        A1 = new QDoubleSpinBox(OknoObiektARX);
        A1->setObjectName("A1");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(A1->sizePolicy().hasHeightForWidth());
        A1->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setBold(false);
        A1->setFont(font2);

        horizontalLayout_2->addWidget(A1);

        A2 = new QDoubleSpinBox(OknoObiektARX);
        A2->setObjectName("A2");
        sizePolicy2.setHeightForWidth(A2->sizePolicy().hasHeightForWidth());
        A2->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(A2);

        A3 = new QDoubleSpinBox(OknoObiektARX);
        A3->setObjectName("A3");
        sizePolicy2.setHeightForWidth(A3->sizePolicy().hasHeightForWidth());
        A3->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(A3);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        Blebel = new QLabel(OknoObiektARX);
        Blebel->setObjectName("Blebel");
        sizePolicy1.setHeightForWidth(Blebel->sizePolicy().hasHeightForWidth());
        Blebel->setSizePolicy(sizePolicy1);
        Blebel->setMinimumSize(QSize(31, 21));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        Blebel->setFont(font3);
        Blebel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_6->addWidget(Blebel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        B1 = new QDoubleSpinBox(OknoObiektARX);
        B1->setObjectName("B1");
        sizePolicy2.setHeightForWidth(B1->sizePolicy().hasHeightForWidth());
        B1->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(B1);

        B2 = new QDoubleSpinBox(OknoObiektARX);
        B2->setObjectName("B2");
        sizePolicy2.setHeightForWidth(B2->sizePolicy().hasHeightForWidth());
        B2->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(B2);

        B3 = new QDoubleSpinBox(OknoObiektARX);
        B3->setObjectName("B3");
        sizePolicy2.setHeightForWidth(B3->sizePolicy().hasHeightForWidth());
        B3->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(B3);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        OpoznienieLabel = new QLabel(OknoObiektARX);
        OpoznienieLabel->setObjectName("OpoznienieLabel");
        sizePolicy1.setHeightForWidth(OpoznienieLabel->sizePolicy().hasHeightForWidth());
        OpoznienieLabel->setSizePolicy(sizePolicy1);
        OpoznienieLabel->setMinimumSize(QSize(91, 25));
        QFont font4;
        font4.setBold(true);
        OpoznienieLabel->setFont(font4);
        OpoznienieLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(OpoznienieLabel);

        Opoznienie = new QDoubleSpinBox(OknoObiektARX);
        Opoznienie->setObjectName("Opoznienie");
        sizePolicy2.setHeightForWidth(Opoznienie->sizePolicy().hasHeightForWidth());
        Opoznienie->setSizePolicy(sizePolicy2);
        Opoznienie->setMinimumSize(QSize(50, 30));
        Opoznienie->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(Opoznienie);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        ZaklocenieLabel = new QLabel(OknoObiektARX);
        ZaklocenieLabel->setObjectName("ZaklocenieLabel");
        sizePolicy1.setHeightForWidth(ZaklocenieLabel->sizePolicy().hasHeightForWidth());
        ZaklocenieLabel->setSizePolicy(sizePolicy1);
        ZaklocenieLabel->setMinimumSize(QSize(91, 25));
        ZaklocenieLabel->setFont(font4);
        ZaklocenieLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(ZaklocenieLabel);

        Zaklocenie = new QCheckBox(OknoObiektARX);
        Zaklocenie->setObjectName("Zaklocenie");
        sizePolicy2.setHeightForWidth(Zaklocenie->sizePolicy().hasHeightForWidth());
        Zaklocenie->setSizePolicy(sizePolicy2);
        Zaklocenie->setMinimumSize(QSize(20, 20));
        Zaklocenie->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(Zaklocenie);

        ZakresNapis = new QLabel(OknoObiektARX);
        ZakresNapis->setObjectName("ZakresNapis");
        ZakresNapis->setFont(font4);

        horizontalLayout->addWidget(ZakresNapis);

        mean = new QDoubleSpinBox(OknoObiektARX);
        mean->setObjectName("mean");

        horizontalLayout->addWidget(mean);

        stdev = new QDoubleSpinBox(OknoObiektARX);
        stdev->setObjectName("stdev");

        horizontalLayout->addWidget(stdev);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        ZatwierdzenieUstawien = new QDialogButtonBox(OknoObiektARX);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        ZatwierdzenieUstawien->setMinimumSize(QSize(219, 24));
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Horizontal);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(ZatwierdzenieUstawien);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(OknoObiektARX);
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::accepted, OknoObiektARX, qOverload<>(&QDialog::accept));
        QObject::connect(ZatwierdzenieUstawien, &QDialogButtonBox::rejected, OknoObiektARX, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OknoObiektARX);
    } // setupUi

    void retranslateUi(QDialog *OknoObiektARX)
    {
        OknoObiektARX->setWindowTitle(QCoreApplication::translate("OknoObiektARX", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("OknoObiektARX", "Wsp\303\263\305\202czynniki wielomian\303\263w A i B", nullptr));
        ALebel->setText(QCoreApplication::translate("OknoObiektARX", "A :", nullptr));
        Blebel->setText(QCoreApplication::translate("OknoObiektARX", "B :", nullptr));
        OpoznienieLabel->setText(QCoreApplication::translate("OknoObiektARX", "Op\303\263\305\272nienie :", nullptr));
        ZaklocenieLabel->setText(QCoreApplication::translate("OknoObiektARX", "Zak\305\202\303\263cenie:", nullptr));
        Zaklocenie->setText(QString());
        ZakresNapis->setText(QCoreApplication::translate("OknoObiektARX", "Zakres:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoObiektARX: public Ui_OknoObiektARX {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOOBIEKTARX_H
