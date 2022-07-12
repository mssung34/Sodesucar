#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "database.h"
#include "signup.h"
#include "mainpage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QDialog
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_login_btn_clicked();

    void on_signup_btn_clicked();

    void on_exit_btn_clicked();

private:
    Ui::login *ui;

    Database db;

    QSqlQuery query;
    std::string query_string;
};
#endif // LOGIN_H
