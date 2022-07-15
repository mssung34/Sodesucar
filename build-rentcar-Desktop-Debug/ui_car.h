/********************************************************************************
** Form generated from reading UI file 'car.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAR_H
#define UI_CAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_car
{
public:
    QPushButton *out_btn;
    QLabel *label;
    QTableWidget *tableWidget;
    QLineEdit *input;
    QPushButton *fix_btn;
    QRadioButton *all;
    QRadioButton *gasoline;
    QRadioButton *disel;
    QRadioButton *elec;
    QRadioButton *lpg;
    QLabel *label_2;

    void setupUi(QDialog *car)
    {
        if (car->objectName().isEmpty())
            car->setObjectName(QString::fromUtf8("car"));
        car->resize(720, 500);
        out_btn = new QPushButton(car);
        out_btn->setObjectName(QString::fromUtf8("out_btn"));
        out_btn->setGeometry(QRect(610, 430, 89, 25));
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
        label = new QLabel(car);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 0, 321, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        tableWidget = new QTableWidget(car);
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
        tableWidget->setGeometry(QRect(40, 80, 551, 371));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 35);\n"
"selection-background-color: rgb(237, 212, 0);\n"
"\n"
"color: rgb(255, 255, 255);\n"
""));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        input = new QLineEdit(car);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(600, 200, 113, 25));
        fix_btn = new QPushButton(car);
        fix_btn->setObjectName(QString::fromUtf8("fix_btn"));
        fix_btn->setGeometry(QRect(610, 240, 89, 25));
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
        all = new QRadioButton(car);
        all->setObjectName(QString::fromUtf8("all"));
        all->setGeometry(QRect(40, 460, 61, 23));
        gasoline = new QRadioButton(car);
        gasoline->setObjectName(QString::fromUtf8("gasoline"));
        gasoline->setGeometry(QRect(140, 460, 71, 23));
        disel = new QRadioButton(car);
        disel->setObjectName(QString::fromUtf8("disel"));
        disel->setGeometry(QRect(240, 460, 71, 23));
        elec = new QRadioButton(car);
        elec->setObjectName(QString::fromUtf8("elec"));
        elec->setGeometry(QRect(330, 460, 71, 23));
        lpg = new QRadioButton(car);
        lpg->setObjectName(QString::fromUtf8("lpg"));
        lpg->setGeometry(QRect(430, 460, 71, 23));
        label_2 = new QLabel(car);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 720, 500));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../\353\213\244\354\232\264\353\241\234\353\223\234/pngwing.com (10).png")));
        label_2->setScaledContents(true);
        label_2->raise();
        out_btn->raise();
        label->raise();
        tableWidget->raise();
        input->raise();
        fix_btn->raise();
        all->raise();
        gasoline->raise();
        disel->raise();
        elec->raise();
        lpg->raise();

        retranslateUi(car);

        QMetaObject::connectSlotsByName(car);
    } // setupUi

    void retranslateUi(QDialog *car)
    {
        car->setWindowTitle(QApplication::translate("car", "Dialog", nullptr));
        out_btn->setText(QApplication::translate("car", "\353\202\230\352\260\200\352\270\260", nullptr));
        label->setText(QApplication::translate("car", "\353\236\234\355\212\270\354\271\264 \352\264\200\353\246\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("car", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("car", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("car", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("car", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("car", "New Column", nullptr));
        fix_btn->setText(QApplication::translate("car", "\354\210\230\354\240\225", nullptr));
        all->setText(QApplication::translate("car", "\354\240\204\354\262\264", nullptr));
        gasoline->setText(QApplication::translate("car", "\355\234\230\353\260\234\354\234\240", nullptr));
        disel->setText(QApplication::translate("car", "\352\262\275\354\234\240", nullptr));
        elec->setText(QApplication::translate("car", "\354\240\204\352\270\260\354\260\250", nullptr));
        lpg->setText(QApplication::translate("car", "LPG", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class car: public Ui_car {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAR_H
