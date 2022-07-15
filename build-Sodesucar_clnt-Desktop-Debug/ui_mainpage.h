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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
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
    QPushButton *chat_btn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *mainpage)
    {
        if (mainpage->objectName().isEmpty())
            mainpage->setObjectName(QString::fromUtf8("mainpage"));
        mainpage->resize(510, 270);
        mainpage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        rent_btn = new QPushButton(mainpage);
        rent_btn->setObjectName(QString::fromUtf8("rent_btn"));
        rent_btn->setGeometry(QRect(10, 60, 89, 191));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../\353\213\244\354\232\264\353\241\234\353\223\234/car_icon_126245.png"), QSize(), QIcon::Normal, QIcon::Off);
        rent_btn->setIcon(icon);
        rent_btn->setIconSize(QSize(80, 80));
        tour_btn = new QPushButton(mainpage);
        tour_btn->setObjectName(QString::fromUtf8("tour_btn"));
        tour_btn->setGeometry(QRect(210, 60, 89, 191));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../\353\213\244\354\232\264\353\241\234\353\223\234/pngwing.com.png"), QSize(), QIcon::Normal, QIcon::Off);
        tour_btn->setIcon(icon1);
        tour_btn->setIconSize(QSize(50, 50));
        user_btn = new QPushButton(mainpage);
        user_btn->setObjectName(QString::fromUtf8("user_btn"));
        user_btn->setGeometry(QRect(310, 60, 89, 191));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../\353\213\244\354\232\264\353\241\234\353\223\234/pngegg.png"), QSize(), QIcon::Normal, QIcon::Off);
        user_btn->setIcon(icon2);
        user_btn->setIconSize(QSize(45, 45));
        exit_btn = new QPushButton(mainpage);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(460, 0, 41, 41));
        exit_btn->setStyleSheet(QString::fromUtf8("border:none"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../\353\213\244\354\232\264\353\241\234\353\223\234/png-transparent-black-power-button-logo-computer-icons-button-power-symbol-on-off-button-window-symbol-on-off-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit_btn->setIcon(icon3);
        exit_btn->setIconSize(QSize(30, 30));
        reservation_btn = new QPushButton(mainpage);
        reservation_btn->setObjectName(QString::fromUtf8("reservation_btn"));
        reservation_btn->setGeometry(QRect(110, 60, 89, 191));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../\353\213\244\354\232\264\353\241\234\353\223\234/document_80398.png"), QSize(), QIcon::Normal, QIcon::Off);
        reservation_btn->setIcon(icon4);
        reservation_btn->setIconSize(QSize(40, 50));
        chat_btn = new QPushButton(mainpage);
        chat_btn->setObjectName(QString::fromUtf8("chat_btn"));
        chat_btn->setGeometry(QRect(410, 60, 89, 191));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../\353\213\244\354\232\264\353\241\234\353\223\234/headset_icon-icons.com_69367.png"), QSize(), QIcon::Normal, QIcon::Off);
        chat_btn->setIcon(icon5);
        chat_btn->setIconSize(QSize(50, 50));
        label = new QLabel(mainpage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 3, 211, 41));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 177, 244);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(mainpage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 190, 71, 17));
        label_3 = new QLabel(mainpage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(125, 190, 67, 17));
        label_4 = new QLabel(mainpage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(218, 190, 71, 17));
        label_5 = new QLabel(mainpage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(334, 190, 41, 17));
        label_6 = new QLabel(mainpage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(427, 190, 61, 17));

        retranslateUi(mainpage);

        QMetaObject::connectSlotsByName(mainpage);
    } // setupUi

    void retranslateUi(QDialog *mainpage)
    {
        mainpage->setWindowTitle(QApplication::translate("mainpage", "Main", nullptr));
        rent_btn->setText(QString());
        tour_btn->setText(QString());
        user_btn->setText(QString());
        exit_btn->setText(QString());
        reservation_btn->setText(QString());
        chat_btn->setText(QString());
        label->setText(QApplication::translate("mainpage", "SODESUCAR", nullptr));
        label_2->setText(QApplication::translate("mainpage", "\353\240\214\355\212\270\354\271\264 \354\230\210\354\225\275", nullptr));
        label_3->setText(QApplication::translate("mainpage", "\354\230\210\354\225\275 \355\231\225\354\235\270", nullptr));
        label_4->setText(QApplication::translate("mainpage", "\355\234\264\354\226\221\354\247\200 \354\240\225\353\263\264", nullptr));
        label_5->setText(QApplication::translate("mainpage", "\353\202\264\354\240\225\353\263\264", nullptr));
        label_6->setText(QApplication::translate("mainpage", "\352\263\240\352\260\235\354\204\274\355\204\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainpage: public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
