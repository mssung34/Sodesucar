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
    QPushButton *enter_btn;
    QLineEdit *write_text;
    QTextBrowser *textbox;
    QLabel *label_3;

    void setupUi(QDialog *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QString::fromUtf8("chat"));
        chat->resize(625, 474);
        chat->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        enter_btn = new QPushButton(chat);
        enter_btn->setObjectName(QString::fromUtf8("enter_btn"));
        enter_btn->setGeometry(QRect(520, 440, 89, 25));
        write_text = new QLineEdit(chat);
        write_text->setObjectName(QString::fromUtf8("write_text"));
        write_text->setGeometry(QRect(12, 440, 501, 25));
        write_text->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:0.5px solid #000;"));
        textbox = new QTextBrowser(chat);
        textbox->setObjectName(QString::fromUtf8("textbox"));
        textbox->setGeometry(QRect(10, 50, 601, 381));
        label_3 = new QLabel(chat);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 0, 191, 41));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 177, 244);"));
        label_3->setAlignment(Qt::AlignCenter);
        write_text->raise();
        textbox->raise();
        label_3->raise();
        enter_btn->raise();

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QDialog *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "Chat", nullptr));
        enter_btn->setText(QApplication::translate("chat", "\354\236\205\353\240\245", nullptr));
        label_3->setText(QApplication::translate("chat", "SODESUCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
