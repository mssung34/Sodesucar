#ifndef RESERVATION_H
#define RESERVATION_H

#include <QDialog>
#include "mainpage.h"

namespace Ui {
class reservation;
}

class reservation : public QDialog
{
    Q_OBJECT

public:
    explicit reservation(QWidget *parent = nullptr);
    ~reservation();
    void show_reservation();

private slots:
    void on_out_btn_clicked();

    void on_fix_btn_clicked();

private:
    Ui::reservation *ui;
    QSqlQuery query;
    QSqlRecord record;
    std::string query_string;
};

#endif // RESERVATION_H
