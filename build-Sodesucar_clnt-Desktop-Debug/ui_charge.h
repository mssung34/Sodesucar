/********************************************************************************
** Form generated from reading UI file 'charge.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARGE_H
#define UI_CHARGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_charge
{
public:
    QLineEdit *pay_text;
    QPushButton *ok_btn;
    QPushButton *exit_btn;

    void setupUi(QDialog *charge)
    {
        if (charge->objectName().isEmpty())
            charge->setObjectName(QString::fromUtf8("charge"));
        charge->resize(265, 111);
        charge->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pay_text = new QLineEdit(charge);
        pay_text->setObjectName(QString::fromUtf8("pay_text"));
        pay_text->setGeometry(QRect(20, 40, 130, 25));
        pay_text->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:0.5px solid #000;"));
        ok_btn = new QPushButton(charge);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));
        ok_btn->setGeometry(QRect(180, 20, 61, 25));
        ok_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border:none\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 177, 244);\n"
"   border:none\n"
"}"));
        exit_btn = new QPushButton(charge);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(180, 60, 61, 25));
        exit_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 177, 244);\n"
"    border:none\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(0, 177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        retranslateUi(charge);

        QMetaObject::connectSlotsByName(charge);
    } // setupUi

    void retranslateUi(QDialog *charge)
    {
        charge->setWindowTitle(QApplication::translate("charge", "Dialog", nullptr));
        pay_text->setPlaceholderText(QApplication::translate("charge", "\354\266\251\354\240\204\352\270\210\354\225\241 \354\236\205\353\240\245", nullptr));
        ok_btn->setText(QApplication::translate("charge", "\355\231\225\354\235\270", nullptr));
        exit_btn->setText(QApplication::translate("charge", "\354\267\250\354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class charge: public Ui_charge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARGE_H
