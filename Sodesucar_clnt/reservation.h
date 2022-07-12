#ifndef RESERVATION_H
#define RESERVATION_H

#include <QDialog>
#include "database.h"

namespace Ui {
class reservation;
}

class reservation : public QDialog
{
    Q_OBJECT

public:
    explicit reservation(std::string id, QWidget *parent = nullptr);
    ~reservation();
    void show_resvlist();

private slots:
    void on_cancle_btn_clicked();

    void on_exit_btn_clicked();

private:
    Ui::reservation *ui;
    QSqlQuery query;
    QSqlRecord rec;
    std::string query_string;
    std::string id;
};

#endif // RESERVATION_H
