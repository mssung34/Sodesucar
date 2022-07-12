#include "rent.h"
#include "ui_rent.h"

#include <string>

rent::rent(std::string id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rent)
{
    ui->setupUi(this);
    this->id = id;
    show_carlist();

    query_string = "SELECT cash FROM userTBL WHERE ID='" + id + "'";
    query.exec(QString::fromStdString(query_string));
    query.next();
    cash = query.value(0).toInt();
}

rent::~rent()
{
    delete ui;
}

void rent::on_rent_btn_clicked()
{
    if(ui->list->currentItem() == NULL)
    {
        QMessageBox::information(this, "error", "차량을 선택하세요.");
    }
    else
    {
        std::vector<std::string> data;
        int row = ui->list->currentRow();
        data.push_back(ui->list->takeItem(row, 0)->text().toStdString());
        data.push_back(ui->list->takeItem(row, 1)->text().toStdString());
        data.push_back(ui->list->takeItem(row, 2)->text().toStdString());
        data.push_back(ui->list->takeItem(row, 3)->text().toStdString());
        data.push_back(ui->list->takeItem(row, 4)->text().toStdString());
        data.push_back(id);
        data.push_back(std::to_string(cash));

        rent_check rc(data);
        rc.setModal(true);
        rc.exec();

        show_carlist();
    }
}

void rent::on_exit_btn_clicked()
{
    this->close();
}

void rent::show_carlist()
{
    ui->list->clear();
    query_string = "SELECT * FROM carTBL";
    query.exec(QString::fromStdString(query_string));
    rec = query.record();
    ui->list->setRowCount(query.size());
    ui->list->setColumnCount(rec.count());
    ui->list->setHorizontalHeaderItem(0, new QTableWidgetItem("차종"));
    ui->list->setHorizontalHeaderItem(1, new QTableWidgetItem("구분"));
    ui->list->setHorizontalHeaderItem(2, new QTableWidgetItem("배기량"));
    ui->list->setHorizontalHeaderItem(3, new QTableWidgetItem("가격(1일)"));
    ui->list->setHorizontalHeaderItem(4, new QTableWidgetItem("잔여대수"));
    int i=0;
    while(query.next())
    {
        ui->list->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
        ui->list->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
        ui->list->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
        ui->list->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
        ui->list->setItem(i++,4,new QTableWidgetItem(query.value(4).toString()));
    }
}
