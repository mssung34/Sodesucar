#ifndef BEACH_H
#define BEACH_H

#include <QDialog>
#include "mainpage.h"

namespace Ui {
class beach;
}

class beach : public QDialog
{
    Q_OBJECT

public:
    explicit beach(QWidget *parent = nullptr);
    ~beach();

    void show_beach();

private slots:
    void on_out_btn_clicked();

    void on_regist_btn_clicked();

    void on_fix_btn_clicked();



private:
    Ui::beach *ui;
    QSqlQuery query;
    QSqlRecord record;
    std::string query_string;
};

#endif // BEACH_H
