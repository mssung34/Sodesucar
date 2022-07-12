#include "charge.h"
#include "ui_charge.h"
#include <QMessageBox>

charge::charge(vector<string> data, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::charge)
{
    ui->setupUi(this);
    this->data = data;
}

charge::~charge()
{
    delete ui;
}

void charge::on_ok_btn_clicked()
{
    pay = ui->pay_text->text().toInt();
    if(pay > 0)
    {
        int cash = stoi(data[1]);
        int point = stoi(data[2]);
        point = point + pay / 10;
        cash += pay;
        query_string = "UPDATE userTBL SET cash='" + std::to_string(cash) + "', point='" + std::to_string(point)
                + "' WHERE ID='" + data[0] + "'";
        query.exec(QString::fromStdString(query_string));
        QMessageBox::information(this, "", "충전 완료.");
        this->close();
    }
}

void charge::on_exit_btn_clicked()
{
    this->close();
}
