#include "car.h"
#include "ui_car.h"


car::car(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::car)
{
    ui->setupUi(this);
    show_all();
}

car::~car()
{
    delete ui;
}

void car::show_list()
{
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setColumnCount(record.count());
    QStringList list = {"이름","종류","배기","가격","수량"};
    ui->tableWidget->setHorizontalHeaderLabels(list);
    int name=record.indexOf("name");
    int kind=record.indexOf("kind");
    int cc=record.indexOf("cc");
    int price=record.indexOf("price");
    int cnt=record.indexOf("count");
    int i=0;
    while(query.next())
    {
      ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(name).toString()));
      ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(kind).toString()));
      ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(cc).toString()));
      ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(price).toString()));
      ui->tableWidget->setItem(i++,4,new QTableWidgetItem(query.value(cnt).toString()));
    }
}

void car::show_all()
{
    ui->tableWidget->clear();
    query_string="SELECT * FROM carTBL ORDER BY price";
    query.exec(QString::fromStdString(query_string));
    record=query.record();
    show_list();
}

void car::show_gasoline()
{
    ui->tableWidget->clear();
    query_string="SELECT * FROM carTBL where kind='휘발유' ORDER BY price";
    query.exec(QString::fromStdString(query_string));
    record=query.record();
    show_list();
}

void car::show_disel()
{
    ui->tableWidget->clear();
    query_string="SELECT * FROM carTBL where kind='경유' ORDER BY price";
    query.exec(QString::fromStdString(query_string));
    record=query.record();
    show_list();
}

void car::show_elec()
{
    ui->tableWidget->clear();
    query_string="SELECT * FROM carTBL where kind='전기차' ORDER BY price";
    query.exec(QString::fromStdString(query_string));
    record=query.record();
    show_list();
}

void car::show_lpg()
{
    ui->tableWidget->clear();
    query_string="SELECT * FROM carTBL where kind='LPG' ORDER BY price";
    query.exec(QString::fromStdString(query_string));
    record=query.record();
    show_list();
}


void car::on_out_btn_clicked()
{
    this->close();
}

void car::on_fix_btn_clicked()
{
    int colNum=ui->tableWidget->currentColumn();
    int row = ui->tableWidget->currentRow();
    QList<QTableWidgetItem> list;
    for(int i =0; i<5; i++)
    {
        list.append(*(ui->tableWidget->takeItem(row,i)));
    }
    if(colNum==0) // name
    {
        query.first();
        query_string="UPDATE carTBL SET name = '"+ui->input->text().toStdString()+"' WHERE name='"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==1) //kind
    {
        query.first();
        query_string="UPDATE carTBL SET kind = '"+ui->input->text().toStdString()+"' WHERE name = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==2) // cc
    {
        query.first();
        query_string="UPDATE carTBL SET cc = '"+ui->input->text().toStdString()+"' WHERE name = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==3) // price
    {
        query.first();
        query_string="UPDATE carTBL SET price = '"+ui->input->text().toStdString()+"' WHERE name = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    else if(colNum==4) // count
    {
        query.first();
        query_string="UPDATE carTBL SET count = '"+ui->input->text().toStdString()+"' WHERE name = '"+list.value(0).text().toStdString()+"'";
        query.exec(QString::fromStdString(query_string));
    }
    show_all();
    QMessageBox::information(nullptr,"Success","랜트카 수정을 완료했습니다.");

}



void car::on_all_clicked()
{
    show_all();
}

void car::on_gasoline_clicked()
{
    show_gasoline();
}

void car::on_disel_clicked()
{
    show_disel();
}

void car::on_elec_clicked()
{
    show_elec();
}

void car::on_lpg_clicked()
{
    show_lpg();
}
