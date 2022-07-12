#include "mainpage.h"
#include "ui_mainpage.h"

mainpage::mainpage(std::string id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainpage)
{
    ui->setupUi(this);
    this->id = id;
}

mainpage::~mainpage()
{
    delete ui;
}

void mainpage::on_rent_btn_clicked()
{
    rent rent(id);
    rent.setModal(true);
    rent.exec();
}

void mainpage::on_tour_btn_clicked()
{
    tour tour;
    tour.setModal(true);
    tour.exec();
}

void mainpage::on_user_btn_clicked()
{
    user user(id);
    user.setModal(true);
    user.exec();
}

void mainpage::on_exit_btn_clicked()
{
    this->close();
}

void mainpage::on_reservation_btn_clicked()
{
    reservation resv(id);
    resv.setModal(true);
    resv.exec();
}

void mainpage::on_shop_btn_clicked()
{

}

void mainpage::on_chat_btn_clicked()
{

}
