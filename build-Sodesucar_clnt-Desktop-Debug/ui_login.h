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
    QLineEdit *id_text;
    QLineEdit *pw_text;
    QPushButton *login_btn;
    QPushButton *signup_btn;
    QPushButton *exit_btn;
    QLabel *label_3;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(260, 290);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        id_text = new QLineEdit(login);
        id_text->setObjectName(QString::fromUtf8("id_text"));
        id_text->setGeometry(QRect(30, 90, 190, 25));
        id_text->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:0.5px solid #000;"));
        pw_text = new QLineEdit(login);
        pw_text->setObjectName(QString::fromUtf8("pw_text"));
        pw_text->setGeometry(QRect(30, 140, 190, 25));
        pw_text->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:0.5px solid #000;"));
        pw_text->setEchoMode(QLineEdit::Password);
        login_btn = new QPushButton(login);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setGeometry(QRect(30, 185, 190, 30));
        login_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border:none\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 177, 244);\n"
"   border:none\n"
"}"));
        signup_btn = new QPushButton(login);
        signup_btn->setObjectName(QString::fromUtf8("signup_btn"));
        signup_btn->setGeometry(QRect(30, 230, 91, 25));
        signup_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:0.5px solid #000;\n"
"border-top:0.5px solid #000;\n"
"border-left:0.5px solid #000;\n"
"border-right:0.5px solid #000;"));
        exit_btn = new QPushButton(login);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(130, 230, 91, 25));
        exit_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:0.5px solid #000;\n"
"border-top:0.5px solid #000;\n"
"border-left:0.5px solid #000;\n"
"border-right:0.5px solid #000;"));
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 20, 191, 51));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 177, 244);"));
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", nullptr));
        id_text->setText(QString());
        id_text->setPlaceholderText(QApplication::translate("login", "ID", nullptr));
        pw_text->setPlaceholderText(QApplication::translate("login", "PW", nullptr));
        login_btn->setText(QApplication::translate("login", "\353\241\234\352\267\270\354\235\270", nullptr));
        signup_btn->setText(QApplication::translate("login", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        exit_btn->setText(QApplication::translate("login", "\354\242\205\353\243\214", nullptr));
        label_3->setText(QApplication::translate("login", "SODESUCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
