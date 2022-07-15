/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *out_btn;
    QLineEdit *input;
    QPushButton *fix_btn;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName(QString::fromUtf8("user"));
        user->resize(890, 490);
        label = new QLabel(user);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 10, 321, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        tableWidget = new QTableWidget(user);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 90, 721, 371));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 35);\n"
"selection-background-color: rgb(237, 212, 0);\n"
"\n"
"color: rgb(255, 255, 255);\n"
""));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        out_btn = new QPushButton(user);
        out_btn->setObjectName(QString::fromUtf8("out_btn"));
        out_btn->setGeometry(QRect(770, 440, 89, 25));
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
        input = new QLineEdit(user);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(760, 210, 113, 25));
        fix_btn = new QPushButton(user);
        fix_btn->setObjectName(QString::fromUtf8("fix_btn"));
        fix_btn->setGeometry(QRect(770, 250, 89, 25));
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
        label_2 = new QLabel(user);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 892, 490));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../\353\213\244\354\232\264\353\241\234\353\223\234/pngwing.com (2).png")));
        label_3 = new QLabel(user);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 890, 490));
        label_3->setScaledContents(true);
        label_3->raise();
        label_2->raise();
        label->raise();
        tableWidget->raise();
        out_btn->raise();
        input->raise();
        fix_btn->raise();

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QApplication::translate("user", "Dialog", nullptr));
        label->setText(QApplication::translate("user", "\354\234\240\354\240\200 \354\240\225\353\263\264 \352\264\200\353\246\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("user", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("user", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("user", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("user", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("user", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("user", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("user", "New Column", nullptr));
        out_btn->setText(QApplication::translate("user", "\353\202\230\352\260\200\352\270\260", nullptr));
        fix_btn->setText(QApplication::translate("user", "\354\210\230\354\240\225", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
