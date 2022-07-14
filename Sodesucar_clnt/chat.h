#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QThread>
#include "sock_connect.h"
#include <QCloseEvent>


namespace Ui {
class chat;
}

class chat : public QDialog
{
    Q_OBJECT

public:
    explicit chat(std::string id, QWidget *parent = nullptr);
    ~chat();
    void closeEvent(QCloseEvent*);


private slots:
    void showMsg(QString msg);

    void on_enter_btn_clicked();

private:
    Ui::chat *ui;
    int *sock;
    tcp *ptcp;
    std::string id;
};

#endif // CHAT_H
