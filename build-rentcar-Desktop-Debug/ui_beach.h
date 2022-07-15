/********************************************************************************
** Form generated from reading UI file 'beach.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEACH_H
#define UI_BEACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_beach
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *regist_btn;
    QPushButton *fix_btn;
    QPushButton *out_btn;
    QLineEdit *input;
    QLabel *label_2;

    void setupUi(QDialog *beach)
    {
        if (beach->objectName().isEmpty())
            beach->setObjectName(QString::fromUtf8("beach"));
        beach->resize(820, 470);
        beach->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(beach);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 0, 291, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        tableWidget = new QTableWidget(beach);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 70, 651, 371));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 35);\n"
"selection-background-color: rgb(237, 212, 0);\n"
"\n"
"color: rgb(255, 255, 255);\n"
""));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        regist_btn = new QPushButton(beach);
        regist_btn->setObjectName(QString::fromUtf8("regist_btn"));
        regist_btn->setGeometry(QRect(710, 70, 89, 25));
        regist_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        fix_btn = new QPushButton(beach);
        fix_btn->setObjectName(QString::fromUtf8("fix_btn"));
        fix_btn->setGeometry(QRect(710, 230, 89, 25));
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
        out_btn = new QPushButton(beach);
        out_btn->setObjectName(QString::fromUtf8("out_btn"));
        out_btn->setGeometry(QRect(710, 420, 89, 25));
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
        input = new QLineEdit(beach);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(700, 190, 113, 25));
        label_2 = new QLabel(beach);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 820, 470));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../\353\213\244\354\232\264\353\241\234\353\223\234/pngwing.com (4).png")));
        label_2->setScaledContents(true);
        label_2->raise();
        label->raise();
        tableWidget->raise();
        regist_btn->raise();
        fix_btn->raise();
        out_btn->raise();
        input->raise();

        retranslateUi(beach);

        QMetaObject::connectSlotsByName(beach);
    } // setupUi

    void retranslateUi(QDialog *beach)
    {
        beach->setWindowTitle(QApplication::translate("beach", "Dialog", nullptr));
        label->setText(QApplication::translate("beach", "\352\264\200\352\264\221\354\247\200 \353\246\254\354\212\244\355\212\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("beach", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("beach", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("beach", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("beach", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("beach", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("beach", "New Column", nullptr));
        regist_btn->setText(QApplication::translate("beach", "\353\223\261\353\241\235", nullptr));
        fix_btn->setText(QApplication::translate("beach", "\354\210\230\354\240\225", nullptr));
        out_btn->setText(QApplication::translate("beach", "\353\202\230\352\260\200\352\270\260", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class beach: public Ui_beach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEACH_H
