#ifndef USER_H
#define USER_H

#include <QDialog>
#include "database.h"
#include "mainpage.h"


namespace Ui {
class user;
}

class user : public QDialog
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();
    void show_user();

private slots:
    void on_out_btn_clicked();

    void on_fix_btn_clicked();

private:
    Ui::user *ui;
    QSqlQuery query;
    QSqlRecord record;
    std::string query_string;
};

#endif // USER_H
