/********************************************************************************
** Form generated from reading UI file 'rent_check.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENT_CHECK_H
#define UI_RENT_CHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_rent_check
{
public:
    QSpinBox *date;
    QLabel *date_label;
    QLabel *name_label;
    QLabel *kind_label;
    QLabel *cc_label;
    QLabel *count_label;
    QLabel *sure;
    QLabel *price_label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *total_label;
    QLabel *disc_label;
    QLabel *label;

    void setupUi(QDialog *rent_check)
    {
        if (rent_check->objectName().isEmpty())
            rent_check->setObjectName(QString::fromUtf8("rent_check"));
        rent_check->resize(400, 348);
        rent_check->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        date = new QSpinBox(rent_check);
        date->setObjectName(QString::fromUtf8("date"));
        date->setGeometry(QRect(305, 220, 61, 26));
        date->setMinimum(1);
        date_label = new QLabel(rent_check);
        date_label->setObjectName(QString::fromUtf8("date_label"));
        date_label->setGeometry(QRect(300, 200, 81, 17));
        name_label = new QLabel(rent_check);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setGeometry(QRect(10, 60, 250, 17));
        kind_label = new QLabel(rent_check);
        kind_label->setObjectName(QString::fromUtf8("kind_label"));
        kind_label->setGeometry(QRect(10, 100, 250, 17));
        cc_label = new QLabel(rent_check);
        cc_label->setObjectName(QString::fromUtf8("cc_label"));
        cc_label->setGeometry(QRect(10, 140, 250, 17));
        count_label = new QLabel(rent_check);
        count_label->setObjectName(QString::fromUtf8("count_label"));
        count_label->setGeometry(QRect(10, 220, 250, 17));
        sure = new QLabel(rent_check);
        sure->setObjectName(QString::fromUtf8("sure"));
        sure->setGeometry(QRect(180, 270, 171, 17));
        price_label = new QLabel(rent_check);
        price_label->setObjectName(QString::fromUtf8("price_label"));
        price_label->setGeometry(QRect(10, 180, 250, 17));
        pushButton = new QPushButton(rent_check);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 300, 89, 25));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border:none\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 177, 244);\n"
"   border:none\n"
"}"));
        pushButton_2 = new QPushButton(rent_check);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 300, 89, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border:none\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 177, 244);\n"
"   border:none\n"
"}"));
        total_label = new QLabel(rent_check);
        total_label->setObjectName(QString::fromUtf8("total_label"));
        total_label->setGeometry(QRect(10, 300, 121, 17));
        disc_label = new QLabel(rent_check);
        disc_label->setObjectName(QString::fromUtf8("disc_label"));
        disc_label->setGeometry(QRect(10, 260, 121, 17));
        label = new QLabel(rent_check);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 181, 51));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 177, 244);"));

        retranslateUi(rent_check);

        QMetaObject::connectSlotsByName(rent_check);
    } // setupUi

    void retranslateUi(QDialog *rent_check)
    {
        rent_check->setWindowTitle(QApplication::translate("rent_check", "Dialog", nullptr));
        date_label->setText(QApplication::translate("rent_check", "<\353\214\200\354\227\254\354\235\274\354\210\230>", nullptr));
        name_label->setText(QApplication::translate("rent_check", "TextLabel", nullptr));
        kind_label->setText(QApplication::translate("rent_check", "TextLabel", nullptr));
        cc_label->setText(QApplication::translate("rent_check", "TextLabel", nullptr));
        count_label->setText(QApplication::translate("rent_check", "TextLabel", nullptr));
        sure->setText(QApplication::translate("rent_check", "\354\240\225\353\247\220\353\241\234 \353\214\200\354\227\254 \355\225\230\354\213\234\352\262\240\354\212\265\353\213\210\352\271\214?", nullptr));
        price_label->setText(QApplication::translate("rent_check", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("rent_check", "\353\204\244", nullptr));
        pushButton_2->setText(QApplication::translate("rent_check", "\354\225\204\353\213\210\354\230\244", nullptr));
        total_label->setText(QApplication::translate("rent_check", "TextLabel", nullptr));
        disc_label->setText(QApplication::translate("rent_check", "TextLabel", nullptr));
        label->setText(QApplication::translate("rent_check", "SODESUCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rent_check: public Ui_rent_check {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENT_CHECK_H
