#ifndef SHOW_CHATLOG_H
#define SHOW_CHATLOG_H

#include <QDialog>
#include "mainpage.h"

namespace Ui {
class show_chatlog;
}

class show_chatlog : public QDialog
{
    Q_OBJECT

public:
    explicit show_chatlog(QWidget *parent = nullptr);
    ~show_chatlog();
    void show_chat();

private slots:
    void on_out_btn_clicked();

private:
    Ui::show_chatlog *ui;
    QSqlQuery query;
    QSqlRecord record;
    std::string query_string;
};

#endif // SHOW_CHATLOG_H
