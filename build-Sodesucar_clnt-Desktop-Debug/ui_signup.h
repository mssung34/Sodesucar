/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLineEdit *id_text;
    QLineEdit *pw_text;
    QLineEdit *pw2_text;
    QLineEdit *phone_text;
    QPushButton *check_btn;
    QPushButton *signup_btn;
    QPushButton *exit_btn;
    QLineEdit *name_text;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(260, 330);
        signup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        id_text = new QLineEdit(signup);
        id_text->setObjectName(QString::fromUtf8("id_text"));
        id_text->setGeometry(QRect(30, 30, 190, 25));
        id_text->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:0.5px solid #000;"));
        pw_text = new QLineEdit(signup);
        pw_text->setObjectName(QString::fromUtf8("pw_text"));
        pw_text->setGeometry(QRect(30, 80, 190, 25));
        pw_text->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:0.5px solid #000;"));
        pw_text->setEchoMode(QLineEdit::Password);
        pw2_text = new QLineEdit(signup);
        pw2_text->setObjectName(QString::fromUtf8("pw2_text"));
        pw2_text->setGeometry(QRect(30, 130, 190, 25));
        pw2_text->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:0.5px solid #000;"));
        pw2_text->setEchoMode(QLineEdit::Password);
        phone_text = new QLineEdit(signup);
        phone_text->setObjectName(QString::fromUtf8("phone_text"));
        phone_text->setGeometry(QRect(30, 230, 190, 25));
        phone_text->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:0.5px solid #000;"));
        check_btn = new QPushButton(signup);
        check_btn->setObjectName(QString::fromUtf8("check_btn"));
        check_btn->setGeometry(QRect(159, 30, 61, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans"));
        font.setBold(true);
        font.setWeight(75);
        check_btn->setFont(font);
        check_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"	border:none;\n"
"	border-bottom:0.5px solid #000;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 177, 244);\n"
"	border:none;\n"
"	border-bottom:0.5px solid #000;\n"
"}"));
        signup_btn = new QPushButton(signup);
        signup_btn->setObjectName(QString::fromUtf8("signup_btn"));
        signup_btn->setGeometry(QRect(30, 270, 81, 25));
        signup_btn->setFont(font);
        signup_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border:none\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 177, 244);\n"
"   border:none\n"
"}"));
        exit_btn = new QPushButton(signup);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(140, 270, 81, 25));
        exit_btn->setFont(font);
        exit_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border:none\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 177, 244);\n"
"   border:none\n"
"}"));
        name_text = new QLineEdit(signup);
        name_text->setObjectName(QString::fromUtf8("name_text"));
        name_text->setGeometry(QRect(30, 180, 190, 25));
        name_text->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:0.5px solid #000;"));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QApplication::translate("signup", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        id_text->setPlaceholderText(QApplication::translate("signup", "ID", nullptr));
        pw_text->setPlaceholderText(QApplication::translate("signup", "PW", nullptr));
        pw2_text->setPlaceholderText(QApplication::translate("signup", "PW Check", nullptr));
        phone_text->setPlaceholderText(QApplication::translate("signup", "Phone", nullptr));
        check_btn->setText(QApplication::translate("signup", "\354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
        signup_btn->setText(QApplication::translate("signup", "\355\231\225\354\235\270", nullptr));
        exit_btn->setText(QApplication::translate("signup", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        name_text->setPlaceholderText(QApplication::translate("signup", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
