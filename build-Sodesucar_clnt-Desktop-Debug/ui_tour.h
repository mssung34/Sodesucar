/********************************************************************************
** Form generated from reading UI file 'tour.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOUR_H
#define UI_TOUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_tour
{
public:
    QPushButton *exit_btn;
    QTableWidget *list;

    void setupUi(QDialog *tour)
    {
        if (tour->objectName().isEmpty())
            tour->setObjectName(QString::fromUtf8("tour"));
        tour->resize(1000, 550);
        tour->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        exit_btn = new QPushButton(tour);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(890, 15, 89, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans"));
        font.setBold(true);
        font.setWeight(75);
        exit_btn->setFont(font);
        exit_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 56, 120);\n"
"	color: rgb(255, 255, 255);\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 56, 120);\n"
"    border-radius: 10px;\n"
"}"));
        list = new QTableWidget(tour);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(10, 60, 970, 470));
        list->horizontalHeader()->setCascadingSectionResizes(false);
        list->horizontalHeader()->setDefaultSectionSize(150);
        list->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        list->horizontalHeader()->setStretchLastSection(true);
        list->verticalHeader()->setVisible(false);

        retranslateUi(tour);

        QMetaObject::connectSlotsByName(tour);
    } // setupUi

    void retranslateUi(QDialog *tour)
    {
        tour->setWindowTitle(QString());
        exit_btn->setText(QApplication::translate("tour", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tour: public Ui_tour {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOUR_H
