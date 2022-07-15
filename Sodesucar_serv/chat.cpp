#include "chat.h"
#include "ui_chat.h"


chat::chat(int sock, Thread *thread, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
    this->sock=sock;
    start_time=QDateTime::currentDateTime().toString();
    connect(thread,SIGNAL(set_msg(QString)),this,SLOT(append(QString)));
}

chat::~chat()
{
    delete ui;
}

void chat::on_pushButton_clicked()
{
    std::string chatMsg="[쏘데스카] : "+ui->lineEdit->text().toStdString();
    //ui->textBrowser->append(QString::fromStdString(chatMsg));
    qDebug()<<QString::fromStdString(chatMsg);
    write(sock, chatMsg.c_str(),chatMsg.length());
    qDebug()<<sock;
    ui->lineEdit->clear();
}

void chat::append(QString msg)
{
    ui->textBrowser->append(msg);
}

void chat::on_out_btn_clicked()
{
    end_time=start_time + "~" +QDateTime::currentDateTime().toString();
    query.prepare("INSERT INTO chatTBL (date,log)" "VALUES (?,?)");
    query.addBindValue(end_time);
    query.addBindValue(ui->textBrowser->toPlainText());
    query.exec();
    QMessageBox::information(this,"Success","채팅로그 저장 완료!");
    this->hide();
}
