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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_reservation
{
public:
    QPushButton *out_btn;
    QLabel *label;
    QTableWidget *tableWidget;
    QLineEdit *input;
    QPushButton *fix_btn;
    QLabel *label_2;

    void setupUi(QDialog *reservation)
    {
        if (reservation->objectName().isEmpty())
            reservation->setObjectName(QString::fromUtf8("reservation"));
        reservation->resize(750, 490);
        out_btn = new QPushButton(reservation);
        out_btn->setObjectName(QString::fromUtf8("out_btn"));
        out_btn->setGeometry(QRect(640, 430, 89, 25));
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
        label = new QLabel(reservation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 10, 321, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        tableWidget = new QTableWidget(reservation);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(70, 80, 551, 371));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 35);\n"
"selection-background-color: rgb(237, 212, 0);\n"
"\n"
"color: rgb(255, 255, 255);\n"
""));
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        input = new QLineEdit(reservation);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(630, 200, 113, 25));
        fix_btn = new QPushButton(reservation);
        fix_btn->setObjectName(QString::fromUtf8("fix_btn"));
        fix_btn->setGeometry(QRect(640, 230, 89, 25));
        fix_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_2 = new QLabel(reservation);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 750, 490));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../\353\213\244\354\232\264\353\241\234\353\223\234/pngwing.com (3).png")));
        label_2->setScaledContents(true);
        label_2->raise();
        out_btn->raise();
        label->raise();
        tableWidget->raise();
        input->raise();
        fix_btn->raise();

        retranslateUi(reservation);

        QMetaObject::connectSlotsByName(reservation);
    } // setupUi

    void retranslateUi(QDialog *reservation)
    {
        reservation->setWindowTitle(QApplication::translate("reservation", "Dialog", nullptr));
        out_btn->setText(QApplication::translate("reservation", "\353\202\230\352\260\200\352\270\260", nullptr));
        label->setText(QApplication::translate("reservation", "\354\230\210\354\225\275 \354\240\225\353\263\264 \352\264\200\353\246\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("reservation", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("reservation", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("reservation", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("reservation", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("reservation", "New Column", nullptr));
        fix_btn->setText(QApplication::translate("reservation", "\354\210\230\354\240\225", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class reservation: public Ui_reservation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATION_H
