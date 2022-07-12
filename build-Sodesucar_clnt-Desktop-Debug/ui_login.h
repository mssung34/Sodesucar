/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *id_text;
    QLineEdit *pw_text;
    QPushButton *login_btn;
    QPushButton *signup_btn;
    QPushButton *exit_btn;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(247, 241);
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 67, 17));
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 67, 17));
        id_text = new QLineEdit(login);
        id_text->setObjectName(QString::fromUtf8("id_text"));
        id_text->setGeometry(QRect(20, 70, 130, 25));
        pw_text = new QLineEdit(login);
        pw_text->setObjectName(QString::fromUtf8("pw_text"));
        pw_text->setGeometry(QRect(20, 120, 130, 25));
        login_btn = new QPushButton(login);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setGeometry(QRect(160, 80, 61, 61));
        signup_btn = new QPushButton(login);
        signup_btn->setObjectName(QString::fromUtf8("signup_btn"));
        signup_btn->setGeometry(QRect(20, 160, 89, 25));
        exit_btn = new QPushButton(login);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(130, 160, 89, 25));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", nullptr));
        label->setText(QApplication::translate("login", "ID", nullptr));
        label_2->setText(QApplication::translate("login", "PW", nullptr));
        login_btn->setText(QApplication::translate("login", "\353\241\234\352\267\270\354\235\270", nullptr));
        signup_btn->setText(QApplication::translate("login", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        exit_btn->setText(QApplication::translate("login", "\354\242\205\353\243\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
