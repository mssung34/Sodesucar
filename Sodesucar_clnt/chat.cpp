#include "chat.h"
#include "ui_chat.h"
#include <QMessageBox>


chat::chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
    ptcp = new tcp(this);
    connect(ptcp, SIGNAL(setMsg(QString)), this, SLOT(showMsg(QString)));
    ptcp->start();
}

chat::~chat()
{
    delete ui;
}

void chat::showMsg(QString msg)
{
    ui->textbox->setText(msg);
}
