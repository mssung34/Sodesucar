#include "show_chatlog.h"
#include "ui_show_chatlog.h"

show_chatlog::show_chatlog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::show_chatlog)
{
    ui->setupUi(this);
    show_chat();
}

show_chatlog::~show_chatlog()
{
    delete ui;
}

void show_chatlog::show_chat()
{
    ui->tableWidget->clear();
    query_string="SELECT * FROM chatTBL";
    query.exec(QString::fromStdString(query_string));
    record=query.record();
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setColumnCount(record.count());
    int date=record.indexOf("date");
    int log=record.indexOf("log");
    QStringList list= {"날짜","채팅기록"};
    ui->tableWidget->setHorizontalHeaderLabels(list);
    int i=0;
    while(query.next())
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(date).toString()));
        ui->tableWidget->setItem(i++,1,new QTableWidgetItem(query.value(log).toString()));
    }
}
void show_chatlog::on_out_btn_clicked()
{
    this->close();
}
