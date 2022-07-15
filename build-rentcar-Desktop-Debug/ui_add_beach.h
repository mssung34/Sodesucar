/********************************************************************************
** Form generated from reading UI file 'add_beach.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_BEACH_H
#define UI_ADD_BEACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_add_beach
{
public:
    QLabel *label;
    QLineEdit *local_input;
    QLineEdit *name_input;
    QLineEdit *toilet_input;
    QLineEdit *shower_input;
    QLineEdit *water_input;
    QLineEdit *parking_input;
    QLabel *local;
    QLabel *name;
    QLabel *toilet;
    QLabel *shower;
    QLabel *water;
    QLabel *parking;
    QPushButton *resist_btn;
    QPushButton *out_btn;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *add_beach)
    {
        if (add_beach->objectName().isEmpty())
            add_beach->setObjectName(QString::fromUtf8("add_beach"));
        add_beach->resize(445, 350);
        label = new QLabel(add_beach);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 171, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        local_input = new QLineEdit(add_beach);
        local_input->setObjectName(QString::fromUtf8("local_input"));
        local_input->setGeometry(QRect(130, 80, 142, 25));
        name_input = new QLineEdit(add_beach);
        name_input->setObjectName(QString::fromUtf8("name_input"));
        name_input->setGeometry(QRect(131, 122, 142, 25));
        toilet_input = new QLineEdit(add_beach);
        toilet_input->setObjectName(QString::fromUtf8("toilet_input"));
        toilet_input->setGeometry(QRect(130, 170, 142, 25));
        shower_input = new QLineEdit(add_beach);
        shower_input->setObjectName(QString::fromUtf8("shower_input"));
        shower_input->setGeometry(QRect(130, 210, 142, 25));
        water_input = new QLineEdit(add_beach);
        water_input->setObjectName(QString::fromUtf8("water_input"));
        water_input->setGeometry(QRect(130, 250, 142, 25));
        parking_input = new QLineEdit(add_beach);
        parking_input->setObjectName(QString::fromUtf8("parking_input"));
        parking_input->setGeometry(QRect(130, 290, 142, 25));
        local = new QLabel(add_beach);
        local->setObjectName(QString::fromUtf8("local"));
        local->setGeometry(QRect(60, 80, 41, 17));
        QFont font1;
        font1.setPointSize(12);
        local->setFont(font1);
        name = new QLabel(add_beach);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(60, 120, 41, 17));
        name->setFont(font1);
        toilet = new QLabel(add_beach);
        toilet->setObjectName(QString::fromUtf8("toilet"));
        toilet->setGeometry(QRect(60, 170, 51, 20));
        toilet->setFont(font1);
        shower = new QLabel(add_beach);
        shower->setObjectName(QString::fromUtf8("shower"));
        shower->setGeometry(QRect(60, 210, 71, 20));
        shower->setFont(font1);
        water = new QLabel(add_beach);
        water->setObjectName(QString::fromUtf8("water"));
        water->setGeometry(QRect(60, 250, 61, 20));
        water->setFont(font1);
        parking = new QLabel(add_beach);
        parking->setObjectName(QString::fromUtf8("parking"));
        parking->setGeometry(QRect(60, 290, 71, 20));
        parking->setFont(font1);
        resist_btn = new QPushButton(add_beach);
        resist_btn->setObjectName(QString::fromUtf8("resist_btn"));
        resist_btn->setGeometry(QRect(290, 250, 89, 25));
        resist_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        out_btn = new QPushButton(add_beach);
        out_btn->setObjectName(QString::fromUtf8("out_btn"));
        out_btn->setGeometry(QRect(290, 290, 89, 25));
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
        label_2 = new QLabel(add_beach);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 20, 67, 17));
        label_3 = new QLabel(add_beach);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 445, 350));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../\353\213\244\354\232\264\353\241\234\353\223\234/pngwing.com.png")));
        label_3->setScaledContents(true);
        label_3->raise();
        label->raise();
        local_input->raise();
        name_input->raise();
        toilet_input->raise();
        shower_input->raise();
        water_input->raise();
        parking_input->raise();
        local->raise();
        name->raise();
        toilet->raise();
        shower->raise();
        water->raise();
        parking->raise();
        resist_btn->raise();
        out_btn->raise();
        label_2->raise();

        retranslateUi(add_beach);

        QMetaObject::connectSlotsByName(add_beach);
    } // setupUi

    void retranslateUi(QDialog *add_beach)
    {
        add_beach->setWindowTitle(QApplication::translate("add_beach", "Dialog", nullptr));
        label->setText(QApplication::translate("add_beach", "\352\264\200\352\264\221\354\247\200 \353\223\261\353\241\235", nullptr));
        local->setText(QApplication::translate("add_beach", "local", nullptr));
        name->setText(QApplication::translate("add_beach", "name", nullptr));
        toilet->setText(QApplication::translate("add_beach", "toilet", nullptr));
        shower->setText(QApplication::translate("add_beach", "shower", nullptr));
        water->setText(QApplication::translate("add_beach", "water", nullptr));
        parking->setText(QApplication::translate("add_beach", "parking", nullptr));
        resist_btn->setText(QApplication::translate("add_beach", "\353\223\261 \353\241\235", nullptr));
        out_btn->setText(QApplication::translate("add_beach", "\353\202\230\352\260\200\352\270\260", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class add_beach: public Ui_add_beach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_BEACH_H
