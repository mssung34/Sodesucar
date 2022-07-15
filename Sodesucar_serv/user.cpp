#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user)
{
    ui->setupUi(this);
    show_user();
}

user::~user()
{
    delete ui;
}

void user::show_user()
{
    ui->tableWidget->clear();
    query_string="SELECT * FROM userTBL";
    query.exec(QString::fromStdString(query_string));
    record=query.record();
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setColumnCount(record.count());
    QStringList list = {"ID","PW","Name","Phone","Grade","Cash","Point"};
    ui->tableWidget->setHorizontalHeaderLabels(list);
    int at_ID=record.indexOf("ID");
    int at_PW=record.indexOf("PW");
    int at_name=record.indexOf("name");
    int at_phone=record.indexOf("phone");
    int at_grade=record.indexOf("grade");
    int at_cash=record.indexOf("cash");
    int at_point=record.indexOf("point");

    int i=0;
    while(query.next())
    {
      ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(at_ID).toString()));
      ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(at_PW).toString()));
      ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(at_name).toString()));
      ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(at_phone).toString()));
      ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(at_grade).toString()));
      ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(at_cash).toString()));
      ui->tableWidget->setItem(i++,6,new QTableWidgetItem(query.value(at_point).toString()));

    }
}

void user::on_out_btn_clicked()
{
    this->hide();
}

void user::on_fix_btn_clicked()
{
    int colNum=ui->tableWidget->currentColumn();
    int row = ui->tableWidget->currentRow();
    QList<QTableWidgetItem> list;
    for(int i =0; i<7; i++)
    {
        list.append(*(ui->tableWidget->takeItem(row,i)));
    }
    if(colNum==0) // ID
    {
        query.first();
        query_string="UPDATE userTBL SET ID = '"+ui->input->text().toStdString()+"' WHERE ID='"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==1) //PW
    {
        query.first();
        query_string="UPDATE userTBL SET PW = '"+ui->input->text().toStdString()+"' WHERE ID = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==2) // name
    {
        query.first();
        query_string="UPDATE userTBL SET name = '"+ui->input->text().toStdString()+"' WHERE ID = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==3) // phone
    {
        query.first();
        query_string="UPDATE userTBL SET phone = '"+ui->input->text().toStdString()+"' WHERE ID = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==4) // grade
    {
        query.first();
        query_string="UPDATE userTBL SET grade = '"+ui->input->text().toStdString()+"' WHERE ID = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==5) // cash
    {
        query.first();
        query_string="UPDATE userTBL SET cash = '"+ui->input->text().toStdString()+"' WHERE ID = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==6) // point
    {
        query.first();
        query_string="UPDATE userTBL SET point = '"+ui->input->text().toStdString()+"' WHERE ID = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    show_user();
    QMessageBox::information(nullptr,"Success","유저정보 수정을 완료했습니다.");

}
