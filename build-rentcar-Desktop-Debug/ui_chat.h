/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *out_btn;
    QLabel *label_2;

    void setupUi(QDialog *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QString::fromUtf8("chat"));
        chat->resize(670, 480);
        label = new QLabel(chat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 10, 281, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8("../\353\213\244\354\232\264\353\241\234\353\223\234/pngwing.com (7).png")));
        textBrowser = new QTextBrowser(chat);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 90, 511, 331));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(79, 79, 79, 35);\n"
"gridline-color: rgb(0, 0, 0);\n"
"color: rgb(25, 25, 25);"));
        lineEdit = new QLineEdit(chat);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 430, 511, 25));
        pushButton = new QPushButton(chat);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(570, 430, 89, 25));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 177,244);\n"
"	color: rgb(255, 255, 255);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 177, 244);\n"
"    border-radius: 10px;\n"
"}"));
        out_btn = new QPushButton(chat);
        out_btn->setObjectName(QString::fromUtf8("out_btn"));
        out_btn->setGeometry(QRect(570, 90, 89, 25));
        out_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(239, 41,41);\n"
"	color: rgb(255, 255, 255);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(239, 41, 41);\n"
"    border-radius: 10px;\n"
"}"));
        label_2 = new QLabel(chat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 670, 480));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../\353\213\244\354\232\264\353\241\234\353\223\234/pngwing.com (8).png")));
        label_2->setScaledContents(true);
        label_2->raise();
        textBrowser->raise();
        lineEdit->raise();
        pushButton->raise();
        out_btn->raise();
        label->raise();

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QDialog *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "Dialog", nullptr));
        label->setText(QApplication::translate("chat", "1:1 \354\261\204\355\214\205\353\260\251", nullptr));
        pushButton->setText(QApplication::translate("chat", "\354\236\205 \353\240\245", nullptr));
        out_btn->setText(QApplication::translate("chat", "\354\261\204\355\214\205\354\242\205\353\243\214", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
