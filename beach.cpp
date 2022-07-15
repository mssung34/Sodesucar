#include "beach.h"
#include "ui_beach.h"
#include "mainpage.h"
#include "database.h"
#include "add_beach.h"

beach::beach(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::beach)
{
    ui->setupUi(this);
    show_beach();
}

beach::~beach()
{
    delete ui;
}

void beach::show_beach()
{
    ui->tableWidget->clear();
    query_string="SELECT * FROM tourTBL";
    query.exec(QString::fromStdString(query_string));
    record=query.record();
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setColumnCount(record.count());
    int at_local=record.indexOf("local");
    int at_name=record.indexOf("name");
    int at_toilet=record.indexOf("toilet");
    int at_shower=record.indexOf("shower");
    int at_water=record.indexOf("water");
    int at_parking=record.indexOf("parking");
    int i=0;
    QStringList list = {"지역","이름","화장실","샤워실","식수대","주차장"};
    ui->tableWidget->setHorizontalHeaderLabels(list);

    while(query.next())
    {
      ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(at_local).toString()));
      ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(at_name).toString()));
      ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(at_toilet).toString()));
      ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(at_shower).toString()));
      ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(at_water).toString()));
      ui->tableWidget->setItem(i++,5,new QTableWidgetItem(query.value(at_parking).toString()));
    }
}

void beach::on_out_btn_clicked()
{
    this->hide();

}

void beach::on_regist_btn_clicked()
{
    this->hide();
    add_beach add_beach;
    add_beach.setModal(true);
    add_beach.exec();
    this->show();
}

void beach::on_fix_btn_clicked()
{
    int colNum=ui->tableWidget->currentColumn();
    int row = ui->tableWidget->currentRow();
    QList<QTableWidgetItem> list;
    for(int i =0; i<6; i++)
    {
        list.append(*(ui->tableWidget->takeItem(row,i)));
    }

    if(colNum==0) // local
    {
        query.first();
        query_string="UPDATE tourTBL SET local = '"+ui->input->text().toStdString()+"' WHERE name='"+list.value(1).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==1) //name
    {
        query.first();
        query_string="UPDATE tourTBL SET name = '"+ui->input->text().toStdString()+"' WHERE name = '"+list.value(1).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==2) // toilet
    {
        query.first();
        query_string="UPDATE tourTBL SET toilet = '"+ui->input->text().toStdString()+"' WHERE name = '"+list.value(1).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==3) // shower
    {
        query.first();
        query_string="UPDATE tourTBL SET shower = '"+ui->input->text().toStdString()+"' WHERE name = '"+list.value(1).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==4) // water
    {
        query.first();
        query_string="UPDATE tourTBL SET water = '"+ui->input->text().toStdString()+"' WHERE name = '"+list.value(1).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==5) // parking
    {
        query.first();
        query_string="UPDATE tourTBL SET parking = '"+ui->input->text().toStdString()+"' WHERE name = '"+list.value(1).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else
    {
        QMessageBox::information(nullptr,"Error","수정할 내용을 선택해주세요.");
    }
    show_beach();
    QMessageBox::information(nullptr,"Success","여행지 수정을 완료했습니다.");

}

