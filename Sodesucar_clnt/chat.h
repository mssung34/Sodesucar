#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QThread>
#include "sock_connect.h"


namespace Ui {
class chat;
}

class chat : public QDialog
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = nullptr);
    ~chat();

private slots:
    void showMsg(QString msg);

private:
    Ui::chat *ui;
    int sock;
    tcp *ptcp;
};

#endif // CHAT_H
