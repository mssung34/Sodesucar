#include "mainpage.h"
#include "ui_mainpage.h"
#include "beach.h"
#include "user.h"
#include "car.h"
#include "chat.h"
#include "Thread.h"

mainpage::mainpage(int sock,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainpage)
{
    ui->setupUi(this);
    this->move(800, 400);
    this->sock=sock;
    thread=new Thread(sock,this);
    connect(thread,SIGNAL(set_value(QString)),this,SLOT(chat_open(QString)));
    thread->start();
}

mainpage::~mainpage()
{
    delete ui;
}


void mainpage::on_user_btn_clicked()
{
    this->hide();
    user user;
    user.setModal(true);
    user.exec();
    this->show();
}


void mainpage::on_beach_btn_clicked()
{
    this->hide();
    beach beach;
    beach.setModal(true);
    beach.exec();
    this->show();
}

void mainpage::on_exit_btn_clicked()
{
    this->close();
}

void mainpage::on_reservation_btn_clicked()
{
    this->hide();
    reservation reservation;
    reservation.setModal(true);
    reservation.exec();
    this->show();
}

void mainpage::on_rentcar_btn_clicked()
{
    this->hide();
    car car;
    car.setModal(true);
    car.exec();
    this->show();
}

void mainpage::chat_open(QString msg)
{
    chat chat(sock,thread);
    chat.setModal(true);
    chat.exec();
    this->show();
}

