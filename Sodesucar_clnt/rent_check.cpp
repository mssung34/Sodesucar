#include "rent_check.h"
#include "ui_rent_check.h"
#include <QMessageBox>

rent_check::rent_check(vector<string> data, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rent_check)
{
    ui->setupUi(this);

    ui->name_label->setText("차종 : " + QString::fromStdString(data[0]));
    ui->kind_label->setText("구분 : " + QString::fromStdString(data[1]));
    ui->cc_label->setText("배기량 : " + QString::fromStdString(data[2]));
    ui->price_label->setText("가격(1일) : " + QString::fromStdString(data[3]));
    ui->count_label->setText("잔여대수 : " + QString::fromStdString(data[4]));

    car_name = data[0];
    id = data[5];
    price = std::stoi(data[3]);
    total = std::stoi(data[3]);
    cash = std::stoi(data[6]);
    count = std::stoi(data[4]);

    query_string = "SELECT grade FROM userTBL WHERE ID='" + id + "'";
    query.exec(QString::fromStdString(query_string));
    query.next();
    grade = query.value(0).toString().toStdString();

    if(grade == "normal")
    {
        total = price;
        ui->total_label->setText("총액 : " + QString::number(total));
        ui->disc_label->setText("등급할인 : 0");
    }
    else if(grade == "premium")
    {
        int disc = (price * 1) / 100 * 15;
        total = price * 1 - disc;
        ui->total_label->setText("총액 : " + QString::number(total));
        ui->disc_label->setText("등급할인 : " + QString::number(disc));
    }
    else if(grade == "vip")
    {
        int disc = (price * 1) / 100 * 20;
        total = price * 1 - disc;
        ui->total_label->setText("총액 : " + QString::number(total));
        ui->disc_label->setText("등급할인 : " + QString::number(disc));
    }
    else
    {

    }
}

rent_check::~rent_check()
{
    delete ui;
}

void rent_check::on_date_valueChanged(int arg1)
{
    if(grade == "normal")
    {
        total = price * arg1;
        ui->total_label->setText("총액 : " + QString::number(total));
        ui->disc_label->setText("등급할인 : 0");
        date = arg1;
    }
    else if(grade == "premium")
    {
        int disc = (price * arg1) / 100 * 15;
        total = price * arg1 - disc;
        ui->total_label->setText("총액 : " + QString::number(total));
        ui->disc_label->setText("등급할인 : " + QString::number(disc));
        date = arg1;
    }
    else if(grade == "vip")
    {
        int disc = (price * arg1) / 100 * 20;
        total = price * arg1 - disc;
        ui->total_label->setText("총액 : " + QString::number(total));
        ui->disc_label->setText("등급할인 : " + QString::number(disc));
        date = arg1;
    }
    else
    {

    }
}

void rent_check::on_pushButton_clicked()
{
    if(cash < total)
    {
        QMessageBox::warning(this, "잔액 부족", "잔여 캐시가 부족합니다.");
    }
    else
    {
        cash = cash - total;
        count--;

        query_string = "UPDATE userTBL SET cash='" + std::to_string(cash) + "' WHERE ID='" + id + "'";
        query.exec(QString::fromStdString(query_string));

        query_string = "UPDATE carTBL SET count='" + std::to_string(count) + "' WHERE name='" + car_name + "'";
        query.exec(QString::fromStdString(query_string));

        query.prepare("INSERT INTO reservationTBL (id, car_kind, car_price, date) "
                          "VALUES (?, ?, ?, ?)");
        query.addBindValue(QString::fromStdString(id));
        query.addBindValue(QString::fromStdString(car_name));
        query.addBindValue(QString::number(total));
        query.addBindValue(QString::number(date));
        query.exec();

        QMessageBox::information(this, "완료", "가까운 지점에 방문하여\n차를 수령하십시오.");
        this->close();
    }
}

void rent_check::on_pushButton_2_clicked()
{
    this->close();
}
