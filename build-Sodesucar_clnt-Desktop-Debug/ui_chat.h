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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QPushButton *enter_btn;
    QLineEdit *write_text;
    QTextBrowser *textbox;

    void setupUi(QDialog *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QString::fromUtf8("chat"));
        chat->resize(625, 435);
        enter_btn = new QPushButton(chat);
        enter_btn->setObjectName(QString::fromUtf8("enter_btn"));
        enter_btn->setGeometry(QRect(520, 400, 89, 25));
        write_text = new QLineEdit(chat);
        write_text->setObjectName(QString::fromUtf8("write_text"));
        write_text->setGeometry(QRect(12, 400, 491, 25));
        textbox = new QTextBrowser(chat);
        textbox->setObjectName(QString::fromUtf8("textbox"));
        textbox->setGeometry(QRect(10, 10, 601, 381));

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QDialog *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "Dialog", nullptr));
        enter_btn->setText(QApplication::translate("chat", "\354\236\205\353\240\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
