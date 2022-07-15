#include "reservation.h"
#include "ui_reservation.h"

reservation::reservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reservation)
{
    ui->setupUi(this);
    show_reservation();
}

reservation::~reservation()
{
    delete ui;
}

void reservation::show_reservation()
{
    ui->tableWidget->clear();
    query_string="SELECT * FROM reservationTBL";
    query.exec(QString::fromStdString(query_string));
    record=query.record();
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setColumnCount(record.count());
    QStringList list = {"Num","ID","Car_kind","Car_price","Date"};
    ui->tableWidget->setHorizontalHeaderLabels(list);
    int num=record.indexOf("num");
    int at_id=record.indexOf("id");
    int car_kind=record.indexOf("car_kind");
    int car_price=record.indexOf("car_price");
    int date=record.indexOf("date");
    int i=0;
    while(query.next())
    {
      ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(num).toString()));
      ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(at_id).toString()));
      ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(car_kind).toString()));
      ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(car_price).toString()));
      ui->tableWidget->setItem(i++,4,new QTableWidgetItem(query.value(date).toString()));
    }
}

void reservation::on_out_btn_clicked()
{
    this->close();
}

void reservation::on_fix_btn_clicked()
{
    int colNum=ui->tableWidget->currentColumn();
    int row = ui->tableWidget->currentRow();
    QList<QTableWidgetItem> list;
    for(int i =0; i<5; i++)
    {
        list.append(*(ui->tableWidget->takeItem(row,i)));
    }

    if (colNum==0)
    {
        show_reservation();
        QMessageBox::information(nullptr,"Error","번호는 수정이 불가능 합니다.");
    }
    else if(colNum==1) // id
    {
        query.first();
        query_string="UPDATE reservationTBL SET id = '"+ui->input->text().toStdString()+"' WHERE num='"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
        show_reservation();
        QMessageBox::information(nullptr,"Success","수정을 완료했습니다.");
    }
    else if(colNum==2) //car_kind
    {
        query.first();
        query_string="UPDATE reservationTBL SET car_kind = '"+ui->input->text().toStdString()+"' WHERE num = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
        show_reservation();
        QMessageBox::information(nullptr,"Success","수정을 완료했습니다.");
    }
    else if(colNum==3) // car_price
    {
        query.first();
        query_string="UPDATE reservationTBL SET car_price = '"+ui->input->text().toStdString()+"' WHERE num = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
        show_reservation();
        QMessageBox::information(nullptr,"Success","수정을 완료했습니다.");
    }
    else if(colNum==4) // date
    {
        query.first();
        query_string="UPDATE reservationTBL SET date = '"+ui->input->text().toStdString()+"' WHERE num = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
        show_reservation();
        QMessageBox::information(nullptr,"Success","수정을 완료했습니다.");
    }

}
