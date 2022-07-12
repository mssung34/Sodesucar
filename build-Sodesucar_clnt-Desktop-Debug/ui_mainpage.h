/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mainpage
{
public:
    QPushButton *rent_btn;
    QPushButton *tour_btn;
    QPushButton *user_btn;
    QPushButton *exit_btn;
    QPushButton *reservation_btn;
    QPushButton *shop_btn;
    QPushButton *chat_btn;

    void setupUi(QDialog *mainpage)
    {
        if (mainpage->objectName().isEmpty())
            mainpage->setObjectName(QString::fromUtf8("mainpage"));
        mainpage->resize(216, 181);
        rent_btn = new QPushButton(mainpage);
        rent_btn->setObjectName(QString::fromUtf8("rent_btn"));
        rent_btn->setGeometry(QRect(10, 10, 89, 25));
        tour_btn = new QPushButton(mainpage);
        tour_btn->setObjectName(QString::fromUtf8("tour_btn"));
        tour_btn->setGeometry(QRect(10, 50, 89, 25));
        user_btn = new QPushButton(mainpage);
        user_btn->setObjectName(QString::fromUtf8("user_btn"));
        user_btn->setGeometry(QRect(10, 90, 89, 25));
        exit_btn = new QPushButton(mainpage);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(110, 130, 89, 25));
        reservation_btn = new QPushButton(mainpage);
        reservation_btn->setObjectName(QString::fromUtf8("reservation_btn"));
        reservation_btn->setGeometry(QRect(110, 10, 89, 25));
        shop_btn = new QPushButton(mainpage);
        shop_btn->setObjectName(QString::fromUtf8("shop_btn"));
        shop_btn->setGeometry(QRect(110, 50, 89, 25));
        chat_btn = new QPushButton(mainpage);
        chat_btn->setObjectName(QString::fromUtf8("chat_btn"));
        chat_btn->setGeometry(QRect(110, 90, 89, 25));

        retranslateUi(mainpage);

        QMetaObject::connectSlotsByName(mainpage);
    } // setupUi

    void retranslateUi(QDialog *mainpage)
    {
        mainpage->setWindowTitle(QApplication::translate("mainpage", "Dialog", nullptr));
        rent_btn->setText(QApplication::translate("mainpage", "\353\240\214\355\212\270\354\271\264 \354\230\210\354\225\275", nullptr));
        tour_btn->setText(QApplication::translate("mainpage", "\355\234\264\354\226\221\354\247\200 \354\240\225\353\263\264", nullptr));
        user_btn->setText(QApplication::translate("mainpage", "\353\202\264\354\240\225\353\263\264", nullptr));
        exit_btn->setText(QApplication::translate("mainpage", "\353\241\234\352\267\270\354\225\204\354\233\203", nullptr));
        reservation_btn->setText(QApplication::translate("mainpage", "\354\230\210\354\225\275\355\230\204\355\231\251", nullptr));
        shop_btn->setText(QApplication::translate("mainpage", "\355\217\254\354\235\270\355\212\270\354\203\201\354\240\220", nullptr));
        chat_btn->setText(QApplication::translate("mainpage", "\352\263\240\352\260\235\354\204\274\355\204\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainpage: public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
