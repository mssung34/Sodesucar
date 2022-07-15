#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <unistd.h>
#include "database.h"
#include "Thread.h"
#include "mainpage.h"
using namespace std;

namespace Ui {
class chat;
}

class chat : public QDialog
{
    Q_OBJECT

public:
    chat(int sock,Thread *thread,QWidget *parent = nullptr);
    ~chat();


private slots:
    void on_pushButton_clicked();
    void append(QString msg);

    void on_out_btn_clicked();

private:
    Ui::chat *ui;
    QSqlQuery query;
    QSqlRecord record;
    std::string query_string;
    QString start_time;
    QString end_time;
    char rec_msg[1024];
    int sock;
    string userid;

};

#endif // CHAT_H
