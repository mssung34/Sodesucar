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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QLineEdit *id_text;
    QLineEdit *pw_text;
    QLineEdit *name_text;
    QLineEdit *phone_text;
    QLabel *id_label;
    QLabel *pw_label;
    QLabel *name_label;
    QLabel *phone_label;
    QLabel *cash_label;
    QLabel *point_label;
    QPushButton *edit_btn;
    QPushButton *exit_btn;
    QPushButton *charge_btn;
    QLabel *grade_label;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName(QString::fromUtf8("user"));
        user->resize(330, 244);
        id_text = new QLineEdit(user);
        id_text->setObjectName(QString::fromUtf8("id_text"));
        id_text->setGeometry(QRect(10, 40, 130, 25));
        id_text->setDragEnabled(true);
        id_text->setReadOnly(true);
        pw_text = new QLineEdit(user);
        pw_text->setObjectName(QString::fromUtf8("pw_text"));
        pw_text->setGeometry(QRect(10, 90, 130, 25));
        name_text = new QLineEdit(user);
        name_text->setObjectName(QString::fromUtf8("name_text"));
        name_text->setGeometry(QRect(10, 140, 130, 25));
        phone_text = new QLineEdit(user);
        phone_text->setObjectName(QString::fromUtf8("phone_text"));
        phone_text->setGeometry(QRect(10, 190, 130, 25));
        id_label = new QLabel(user);
        id_label->setObjectName(QString::fromUtf8("id_label"));
        id_label->setGeometry(QRect(10, 20, 67, 17));
        pw_label = new QLabel(user);
        pw_label->setObjectName(QString::fromUtf8("pw_label"));
        pw_label->setGeometry(QRect(10, 70, 67, 17));
        name_label = new QLabel(user);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setGeometry(QRect(10, 120, 67, 17));
        phone_label = new QLabel(user);
        phone_label->setObjectName(QString::fromUtf8("phone_label"));
        phone_label->setGeometry(QRect(10, 170, 67, 17));
        cash_label = new QLabel(user);
        cash_label->setObjectName(QString::fromUtf8("cash_label"));
        cash_label->setGeometry(QRect(170, 50, 151, 17));
        point_label = new QLabel(user);
        point_label->setObjectName(QString::fromUtf8("point_label"));
        point_label->setGeometry(QRect(170, 90, 151, 17));
        edit_btn = new QPushButton(user);
        edit_btn->setObjectName(QString::fromUtf8("edit_btn"));
        edit_btn->setGeometry(QRect(220, 160, 89, 25));
        exit_btn = new QPushButton(user);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(220, 200, 89, 25));
        charge_btn = new QPushButton(user);
        charge_btn->setObjectName(QString::fromUtf8("charge_btn"));
        charge_btn->setGeometry(QRect(220, 120, 89, 25));
        grade_label = new QLabel(user);
        grade_label->setObjectName(QString::fromUtf8("grade_label"));
        grade_label->setGeometry(QRect(170, 10, 151, 17));

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QApplication::translate("user", "Dialog", nullptr));
        id_label->setText(QApplication::translate("user", "ID", nullptr));
        pw_label->setText(QApplication::translate("user", "PW", nullptr));
        name_label->setText(QApplication::translate("user", "Name", nullptr));
        phone_label->setText(QApplication::translate("user", "Phone", nullptr));
        cash_label->setText(QApplication::translate("user", "Cash", nullptr));
        point_label->setText(QApplication::translate("user", "Point", nullptr));
        edit_btn->setText(QApplication::translate("user", "\354\210\230\354\240\225", nullptr));
        exit_btn->setText(QApplication::translate("user", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        charge_btn->setText(QApplication::translate("user", "\354\266\251\354\240\204", nullptr));
        grade_label->setText(QApplication::translate("user", "Grade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
