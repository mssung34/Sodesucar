#include "add_beach.h"
#include "ui_add_beach.h"
#include <QMessageBox>

add_beach::add_beach(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_beach)
{
    ui->setupUi(this);
}

add_beach::~add_beach()
{
    delete ui;
}

void add_beach::on_out_btn_clicked()
{
    this->hide();
    beach beach;
    beach.setModal(true);
    beach.exec();
    this->show();
}

void add_beach::on_resist_btn_clicked()
{
    query.prepare("INSERT INTO tourTBL (local,name,toilet,shower,water,parking)" "VALUES (?,?,?,?,?,?)");
    query.addBindValue(ui->local_input->text());
    query.addBindValue(ui->name_input->text());
    query.addBindValue(ui->toilet_input->text());
    query.addBindValue(ui->shower_input->text());
    query.addBindValue(ui->water_input->text());
    query.addBindValue(ui->parking_input->text());
    query.exec();
    QMessageBox::information(this,"Success","휴양지 등록 완료!");
    on_out_btn_clicked();
}



