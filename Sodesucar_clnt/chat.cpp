#include "chat.h"
#include "ui_chat.h"
#include <QMessageBox>


chat::chat(std::string id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
    ptcp = new tcp(this);
    connect(ptcp, SIGNAL(setMsg(QString)), this, SLOT(showMsg(QString)));
    ptcp->start();
    this->id = id;
}

chat::~chat()
{
    delete ui;
    delete ptcp;
}

void chat::showMsg(QString msg)
{
    ui->textbox->append(msg);
}

void chat::on_enter_btn_clicked()
{
    std::string msg ="[" + id + "] : " + ui->write_text->text().toStdString();
    send(ptcp->sock, msg.c_str(), 1024, 0);
    ui->write_text->clear();
}

void chat::closeEvent(QCloseEvent*)
{
    shutdown(ptcp->sock, SHUT_RDWR);
    ptcp->terminate();
}
