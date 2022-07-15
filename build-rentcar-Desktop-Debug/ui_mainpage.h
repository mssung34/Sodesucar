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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainpage
{
public:
    QWidget *centralwidget;
    QPushButton *user_btn;
    QPushButton *beach_btn;
    QPushButton *rentcar_btn;
    QPushButton *exit_btn;
    QPushButton *reservation_btn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainpage)
    {
        if (mainpage->objectName().isEmpty())
            mainpage->setObjectName(QString::fromUtf8("mainpage"));
        mainpage->resize(360, 500);
        QFont font;
        font.setFamily(QString::fromUtf8("Sans"));
        font.setBold(true);
        font.setWeight(75);
        mainpage->setFont(font);
        mainpage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255,255);"));
        centralwidget = new QWidget(mainpage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        user_btn = new QPushButton(centralwidget);
        user_btn->setObjectName(QString::fromUtf8("user_btn"));
        user_btn->setGeometry(QRect(185, 340, 150, 40));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 177, 244, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        user_btn->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font1.setBold(true);
        font1.setWeight(75);
        user_btn->setFont(font1);
        user_btn->setAutoFillBackground(false);
        user_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0,177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255,255,255);\n"
"	color: rgb(0,177, 244);\n"
"    border-radius: 10px;\n"
"}"));
        beach_btn = new QPushButton(centralwidget);
        beach_btn->setObjectName(QString::fromUtf8("beach_btn"));
        beach_btn->setGeometry(QRect(15, 340, 150, 40));
        beach_btn->setFont(font);
        beach_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0,177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255,255,255);\n"
"	color: rgb(0,177, 244);\n"
"    border-radius: 10px;\n"
"}"));
        rentcar_btn = new QPushButton(centralwidget);
        rentcar_btn->setObjectName(QString::fromUtf8("rentcar_btn"));
        rentcar_btn->setGeometry(QRect(15, 180, 150, 40));
        rentcar_btn->setFont(font);
        rentcar_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0,177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255,255,255);\n"
"	color: rgb(0,177, 244);\n"
"    border-radius: 10px;\n"
"}"));
        exit_btn = new QPushButton(centralwidget);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(10, 410, 331, 40));
        exit_btn->setFont(font);
        exit_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        reservation_btn = new QPushButton(centralwidget);
        reservation_btn->setObjectName(QString::fromUtf8("reservation_btn"));
        reservation_btn->setGeometry(QRect(185, 180, 150, 40));
        reservation_btn->setFont(font);
        reservation_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0,177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255,255,255);\n"
"	color: rgb(0,177, 244);\n"
"    border-radius: 10px;\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 311, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush6(QColor(0, 177, 244, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label->setPalette(palette1);
        QFont font2;
        font2.setPointSize(40);
        label->setFont(font2);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 177,244);\n"
"background-color: rgb(255,255,255);\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 140, 90));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../\354\202\254\354\247\204/\354\212\244\355\201\254\353\246\260\354\203\267, 2022-07-15 12-09-54.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 240, 140, 90));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../\354\202\254\354\247\204/\354\212\244\355\201\254\353\246\260\354\203\267, 2022-07-15 12-23-34.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 240, 140, 90));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../\354\202\254\354\247\204/\354\212\244\355\201\254\353\246\260\354\203\267, 2022-07-15 12-24-23.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 80, 140, 90));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../\354\202\254\354\247\204/\354\212\244\355\201\254\353\246\260\354\203\267, 2022-07-15 12-25-08.png")));
        label_5->setScaledContents(true);
        mainpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainpage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 360, 22));
        mainpage->setMenuBar(menubar);
        statusbar = new QStatusBar(mainpage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainpage->setStatusBar(statusbar);

        retranslateUi(mainpage);

        QMetaObject::connectSlotsByName(mainpage);
    } // setupUi

    void retranslateUi(QMainWindow *mainpage)
    {
        mainpage->setWindowTitle(QApplication::translate("mainpage", "Main", nullptr));
        user_btn->setText(QApplication::translate("mainpage", "\355\232\214\354\233\220\352\264\200\353\246\254", nullptr));
        beach_btn->setText(QApplication::translate("mainpage", "\352\264\200\352\264\221\354\247\200 \352\264\200\353\246\254", nullptr));
        rentcar_btn->setText(QApplication::translate("mainpage", "\353\236\234\355\212\270\354\271\264 \352\264\200\353\246\254", nullptr));
        exit_btn->setText(QApplication::translate("mainpage", "\354\242\205\353\243\214", nullptr));
        reservation_btn->setText(QApplication::translate("mainpage", "\354\230\210\354\225\275 \352\264\200\353\246\254", nullptr));
        label->setText(QApplication::translate("mainpage", "SODESUCAR", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainpage: public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
