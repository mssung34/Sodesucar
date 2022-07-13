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

    void setupUi(QDialog *rent)
    {
        if (rent->objectName().isEmpty())
            rent->setObjectName(QString::fromUtf8("rent"));
        rent->resize(1000, 550);
        list = new QTableWidget(rent);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(10, 60, 970, 470));
        list->setColumnCount(0);
        list->horizontalHeader()->setDefaultSectionSize(180);
        list->horizontalHeader()->setStretchLastSection(true);
        list->verticalHeader()->setVisible(false);
        exit_btn = new QPushButton(rent);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(890, 15, 89, 30));
        rent_btn = new QPushButton(rent);
        rent_btn->setObjectName(QString::fromUtf8("rent_btn"));
        rent_btn->setGeometry(QRect(770, 15, 89, 30));
        all = new QRadioButton(rent);
        all->setObjectName(QString::fromUtf8("all"));
        all->setGeometry(QRect(10, 30, 51, 23));
        all->setChecked(true);
        diesel = new QRadioButton(rent);
        diesel->setObjectName(QString::fromUtf8("diesel"));
        diesel->setGeometry(QRect(80, 30, 51, 23));
        gasoline = new QRadioButton(rent);
        gasoline->setObjectName(QString::fromUtf8("gasoline"));
        gasoline->setGeometry(QRect(150, 30, 61, 23));
        lpg = new QRadioButton(rent);
        lpg->setObjectName(QString::fromUtf8("lpg"));
        lpg->setGeometry(QRect(230, 30, 51, 23));
        elec = new QRadioButton(rent);
        elec->setObjectName(QString::fromUtf8("elec"));
        elec->setGeometry(QRect(290, 30, 61, 23));

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
    } // retranslateUi

};

namespace Ui {
    class rent: public Ui_rent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENT_H
