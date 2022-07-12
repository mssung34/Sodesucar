#ifndef USER_H
#define USER_H

#include <QDialog>
#include "database.h"
#include <QMessageBox>

namespace Ui {
class user;
}

class user : public QDialog
{
    Q_OBJECT

public:
    explicit user(std::string id, QWidget *parent = nullptr);
    ~user();
    void show_userdata();

private slots:
    void on_charge_btn_clicked();

    void on_edit_btn_clicked();

    void on_exit_btn_clicked();

private:
    Ui::user *ui;

    QSqlQuery query;
    std::string query_string;

    std::string id;
    int cash;
    int point;
};

#endif // USER_H
