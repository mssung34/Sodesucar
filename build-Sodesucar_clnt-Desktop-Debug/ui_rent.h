/********************************************************************************
** Form generated from reading UI file 'rent.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENT_H
#define UI_RENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_rent
{
public:
    QTableWidget *list;
    QPushButton *exit_btn;
    QPushButton *rent_btn;
    QRadioButton *all;
    QRadioButton *diesel;
    QRadioButton *gasoline;
    QRadioButton *lpg;
    QRadioButton *elec;
    QLabel *label;

    void setupUi(QDialog *rent)
    {
        if (rent->objectName().isEmpty())
            rent->setObjectName(QString::fromUtf8("rent"));
        rent->resize(1000, 550);
        rent->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        list = new QTableWidget(rent);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(10, 60, 970, 470));
        list->setColumnCount(0);
        list->horizontalHeader()->setDefaultSectionSize(180);
        list->horizontalHeader()->setStretchLastSection(true);
        list->verticalHeader()->setVisible(false);
        exit_btn = new QPushButton(rent);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(890, 20, 89, 30));
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
        rent_btn = new QPushButton(rent);
        rent_btn->setObjectName(QString::fromUtf8("rent_btn"));
        rent_btn->setGeometry(QRect(780, 20, 89, 30));
        rent_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border:none\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 177, 244);\n"
"   border:none\n"
"}"));
        all = new QRadioButton(rent);
        all->setObjectName(QString::fromUtf8("all"));
        all->setGeometry(QRect(410, 24, 51, 23));
        all->setChecked(true);
        diesel = new QRadioButton(rent);
        diesel->setObjectName(QString::fromUtf8("diesel"));
        diesel->setGeometry(QRect(480, 24, 51, 23));
        gasoline = new QRadioButton(rent);
        gasoline->setObjectName(QString::fromUtf8("gasoline"));
        gasoline->setGeometry(QRect(550, 24, 61, 23));
        lpg = new QRadioButton(rent);
        lpg->setObjectName(QString::fromUtf8("lpg"));
        lpg->setGeometry(QRect(630, 24, 51, 23));
        elec = new QRadioButton(rent);
        elec->setObjectName(QString::fromUtf8("elec"));
        elec->setGeometry(QRect(690, 24, 61, 23));
        label = new QLabel(rent);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 181, 31));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 177, 244);"));

        retranslateUi(rent);

        QMetaObject::connectSlotsByName(rent);
    } // setupUi

    void retranslateUi(QDialog *rent)
    {
        rent->setWindowTitle(QApplication::translate("rent", "Dialog", nullptr));
        exit_btn->setText(QApplication::translate("rent", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        rent_btn->setText(QApplication::translate("rent", "\353\240\214\355\212\270", nullptr));
        all->setText(QApplication::translate("rent", "\354\240\204\354\262\264", nullptr));
        diesel->setText(QApplication::translate("rent", "\352\262\275\354\234\240", nullptr));
        gasoline->setText(QApplication::translate("rent", "\355\234\230\353\260\234\354\234\240", nullptr));
        lpg->setText(QApplication::translate("rent", "LPG", nullptr));
        elec->setText(QApplication::translate("rent", "\354\240\204\352\270\260\354\260\250", nullptr));
        label->setText(QApplication::translate("rent", "SODESUCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rent: public Ui_rent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENT_H
