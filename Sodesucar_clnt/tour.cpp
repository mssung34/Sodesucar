#include "tour.h"
#include "ui_tour.h"

tour::tour(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tour)
{
    ui->setupUi(this);
    show_tourlist();
}

tour::~tour()
{
    delete ui;
}

void tour::on_exit_btn_clicked()
{
    this->close();
}

void tour::show_tourlist()
{
    ui->list->clear();
    query_string = "SELECT * FROM tourTBL";
    query.exec(QString::fromStdString(query_string));
    rec = query.record();
    ui->list->setRowCount(query.size());
    ui->list->setColumnCount(rec.count());
    ui->list->setHorizontalHeaderItem(0, new QTableWidgetItem("지역"));
    ui->list->setHorizontalHeaderItem(1, new QTableWidgetItem("이름"));
    ui->list->setHorizontalHeaderItem(2, new QTableWidgetItem("화장실"));
    ui->list->setHorizontalHeaderItem(3, new QTableWidgetItem("샤워장"));
    ui->list->setHorizontalHeaderItem(4, new QTableWidgetItem("식수대"));
    ui->list->setHorizontalHeaderItem(5, new QTableWidgetItem("주차장"));
    int i=0;
    while(query.next())
    {
        ui->list->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
        ui->list->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
        ui->list->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
        ui->list->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
        ui->list->setItem(i,4,new QTableWidgetItem(query.value(4).toString()));
        ui->list->setItem(i++,5,new QTableWidgetItem(query.value(5).toString()));
    }
}
