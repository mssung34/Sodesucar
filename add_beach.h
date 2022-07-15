#ifndef ADD_BEACH_H
#define ADD_BEACH_H

#include <QDialog>
#include "beach.h"
#include "mainpage.h"

namespace Ui {
class add_beach;
}

class add_beach : public QDialog
{
    Q_OBJECT

public:
    explicit add_beach(QWidget *parent = nullptr);
    ~add_beach();

private slots:
    void on_resist_btn_clicked();

    void on_out_btn_clicked();


private:
    Ui::add_beach *ui;
    QSqlQuery query;
    QSqlRecord record;
    std::string query_string;
};

#endif // ADD_BEACH_H
