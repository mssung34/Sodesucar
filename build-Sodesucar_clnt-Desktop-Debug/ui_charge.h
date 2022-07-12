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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_charge
{
public:
    QLineEdit *pay_text;
    QPushButton *ok_btn;
    QPushButton *exit_btn;
    QLabel *label;

    void setupUi(QDialog *charge)
    {
        if (charge->objectName().isEmpty())
            charge->setObjectName(QString::fromUtf8("charge"));
        charge->resize(284, 123);
        pay_text = new QLineEdit(charge);
        pay_text->setObjectName(QString::fromUtf8("pay_text"));
        pay_text->setGeometry(QRect(20, 50, 130, 25));
        ok_btn = new QPushButton(charge);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));
        ok_btn->setGeometry(QRect(170, 20, 89, 25));
        exit_btn = new QPushButton(charge);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(170, 60, 89, 25));
        label = new QLabel(charge);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 91, 17));

        retranslateUi(charge);

        QMetaObject::connectSlotsByName(charge);
    } // setupUi

    void retranslateUi(QDialog *charge)
    {
        charge->setWindowTitle(QApplication::translate("charge", "Dialog", nullptr));
        ok_btn->setText(QApplication::translate("charge", "\355\231\225\354\235\270", nullptr));
        exit_btn->setText(QApplication::translate("charge", "\354\267\250\354\206\214", nullptr));
        label->setText(QApplication::translate("charge", "\354\266\251\354\240\204\352\270\210\354\225\241 \354\236\205\353\240\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class charge: public Ui_charge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARGE_H
