/********************************************************************************
** Form generated from reading UI file 'reservation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATION_H
#define UI_RESERVATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_reservation
{
public:
    QTableWidget *list;
    QPushButton *cancle_btn;
    QPushButton *exit_btn;
    QLabel *label_3;

    void setupUi(QDialog *reservation)
    {
        if (reservation->objectName().isEmpty())
            reservation->setObjectName(QString::fromUtf8("reservation"));
        reservation->resize(1000, 550);
        reservation->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        list = new QTableWidget(reservation);
        if (list->columnCount() < 5)
            list->setColumnCount(5);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(10, 60, 970, 470));
        list->setColumnCount(5);
        list->horizontalHeader()->setDefaultSectionSize(180);
        list->horizontalHeader()->setStretchLastSection(true);
        list->verticalHeader()->setVisible(false);
        cancle_btn = new QPushButton(reservation);
        cancle_btn->setObjectName(QString::fromUtf8("cancle_btn"));
        cancle_btn->setGeometry(QRect(770, 15, 89, 30));
        cancle_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 177, 244);\n"
"	color: rgb(255, 255, 255);\n"
"    border:none\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 177, 244);\n"
"   border:none\n"
"}"));
        exit_btn = new QPushButton(reservation);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(890, 15, 89, 30));
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
        label_3 = new QLabel(reservation);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 191, 41));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 177, 244);"));
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(reservation);

        QMetaObject::connectSlotsByName(reservation);
    } // setupUi

    void retranslateUi(QDialog *reservation)
    {
        reservation->setWindowTitle(QApplication::translate("reservation", "Reservation", nullptr));
        cancle_btn->setText(QApplication::translate("reservation", "\354\230\210\354\225\275\354\267\250\354\206\214", nullptr));
        exit_btn->setText(QApplication::translate("reservation", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        label_3->setText(QApplication::translate("reservation", "SODESUCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reservation: public Ui_reservation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATION_H
