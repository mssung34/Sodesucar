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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(275, 335);
        signup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        id_text = new QLineEdit(signup);
        id_text->setObjectName(QString::fromUtf8("id_text"));
        id_text->setGeometry(QRect(30, 40, 130, 25));
        id_text->setStyleSheet(QString::fromUtf8(""));
        pw_text = new QLineEdit(signup);
        pw_text->setObjectName(QString::fromUtf8("pw_text"));
        pw_text->setGeometry(QRect(30, 90, 130, 25));
        pw_text->setEchoMode(QLineEdit::Password);
        pw2_text = new QLineEdit(signup);
        pw2_text->setObjectName(QString::fromUtf8("pw2_text"));
        pw2_text->setGeometry(QRect(30, 140, 130, 25));
        pw2_text->setEchoMode(QLineEdit::Password);
        phone_text = new QLineEdit(signup);
        phone_text->setObjectName(QString::fromUtf8("phone_text"));
        phone_text->setGeometry(QRect(30, 240, 130, 25));
        check_btn = new QPushButton(signup);
        check_btn->setObjectName(QString::fromUtf8("check_btn"));
        check_btn->setGeometry(QRect(170, 40, 81, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans"));
        font.setBold(true);
        font.setWeight(75);
        check_btn->setFont(font);
        check_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 56, 120);\n"
"	color: rgb(255, 255, 255);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 56, 120);\n"
"    border-radius: 10px;\n"
"}"));
        signup_btn = new QPushButton(signup);
        signup_btn->setObjectName(QString::fromUtf8("signup_btn"));
        signup_btn->setGeometry(QRect(30, 280, 89, 30));
        signup_btn->setFont(font);
        signup_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 56, 120);\n"
"	color: rgb(255, 255, 255);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 56, 120);\n"
"    border-radius: 10px;\n"
"}"));
        exit_btn = new QPushButton(signup);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(150, 280, 89, 30));
        exit_btn->setFont(font);
        exit_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 56, 120);\n"
"	color: rgb(255, 255, 255);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 56, 120);\n"
"    border-radius: 10px;\n"
"}"));
        name_text = new QLineEdit(signup);
        name_text->setObjectName(QString::fromUtf8("name_text"));
        name_text->setGeometry(QRect(30, 190, 130, 25));
        label = new QLabel(signup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 67, 17));
        label_2 = new QLabel(signup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 67, 17));
        label_3 = new QLabel(signup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 67, 17));
        label_4 = new QLabel(signup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 220, 67, 17));
        label_5 = new QLabel(signup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 170, 67, 17));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QApplication::translate("signup", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        check_btn->setText(QApplication::translate("signup", "\354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
        signup_btn->setText(QApplication::translate("signup", "\355\231\225\354\235\270", nullptr));
        exit_btn->setText(QApplication::translate("signup", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        label->setText(QApplication::translate("signup", "ID", nullptr));
        label_2->setText(QApplication::translate("signup", "PW", nullptr));
        label_3->setText(QApplication::translate("signup", "PW Check", nullptr));
        label_4->setText(QApplication::translate("signup", "Phone", nullptr));
        label_5->setText(QApplication::translate("signup", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
