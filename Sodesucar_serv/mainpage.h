#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <user.h>
#include <database.h>
#include <iostream>
#include <cstring>
#include <string>
#include <QMessageBox>
#include <reservation.h>
#include <Thread.h>
#include <chat.h>

QT_BEGIN_NAMESPACE
namespace Ui { class mainpage; }
QT_END_NAMESPACE

class mainpage : public QMainWindow
{
    Q_OBJECT

public:
    mainpage(int socket, QWidget *parent = nullptr);
    ~mainpage();

private slots:


    void on_user_btn_clicked();

    void on_beach_btn_clicked();

    void on_exit_btn_clicked();

    void on_reservation_btn_clicked();

    void on_rentcar_btn_clicked();

    void chat_open(QString msg);

private:
    Ui::mainpage *ui;
    Database db;
    Thread *thread;
    int sock;
};
#endif // MAINPAGE_H
