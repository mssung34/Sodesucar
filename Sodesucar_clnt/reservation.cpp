#include "reservation.h"
#include "ui_reservation.h"
#include <QMessageBox>
#include <string>
#include <QDebug>

reservation::reservation(std::string id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reservation)
{
    ui->setupUi(this);
    this->id = id;
    show_resvlist();
}

reservation::~reservation()
{
    delete ui;
}

void reservation::show_resvlist()
{
    ui->list->clear();
    query_string = "SELECT * FROM reservationTBL WHERE id='" + id + "'";
    query.exec(QString::fromStdString(query_string));
    rec = query.record();
    ui->list->setRowCount(query.size());
    ui->list->setColumnCount(rec.count());
    ui->list->setHorizontalHeaderItem(0, new QTableWidgetItem("No"));
    ui->list->setHorizontalHeaderItem(1, new QTableWidgetItem("ID"));
    ui->list->setHorizontalHeaderItem(2, new QTableWidgetItem("차종"));
    ui->list->setHorizontalHeaderItem(3, new QTableWidgetItem("결제금액"));
    ui->list->setHorizontalHeaderItem(4, new QTableWidgetItem("대여일수"));
    int i=0;
    while(query.next())
    {
        ui->list->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
        ui->list->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
        ui->list->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
        ui->list->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
        ui->list->setItem(i++,4,new QTableWidgetItem(query.value(3).toString()));
    }
}

void reservation::on_cancle_btn_clicked()
{
    if(ui->list->currentItem() == NULL)
    {
        QMessageBox::warning(this, "", "취소하실 항목을 선택하세요.");
    }
    else
    {
        int row = ui->list->currentRow();
        std::string car_name = ui->list->takeItem(row, 2)->text().toStdString();

        query_string = "SELECT cash FROM userTBL WHERE ID='" + id + "'";
        query.exec(QString::fromStdString(query_string));
        query.next();
        int cash = query.value(0).toInt();
        cash += ui->list->takeItem(row, 3)->text().toInt();

        query_string = "UPDATE userTBL SET cash='" + std::to_string(cash) + "' WHERE ID='" + id + "'";
        query.exec(QString::fromStdString(query_string));

        query_string = "SELECT count FROM carTBL WHERE name='" + car_name + "'";
        query.exec(QString::fromStdString(query_string));
        query.next();
        int count = query.value(0).toInt();
        count++;

        query_string = "UPDATE carTBL SET count='" + std::to_string(count) + "' WHERE name='" +
                car_name + "'";
        query.exec(QString::fromStdString(query_string));

        query_string = "DELETE FROM reservationTBL WHERE car_kind='" + car_name + "'";
        query.exec(QString::fromStdString(query_string));

        QMessageBox::information(this, "OK", "삭제 완료");
        show_resvlist();
    }
}

void reservation::on_exit_btn_clicked()
{
    this->close();
}
