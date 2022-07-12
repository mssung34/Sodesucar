#ifndef RENT_CHECK_H
#define RENT_CHECK_H

#include <QDialog>
#include "database.h"

using namespace std;

namespace Ui {
class rent_check;
}

class rent_check : public QDialog
{
    Q_OBJECT

public:
    explicit rent_check(vector<string> data, QWidget *parent = nullptr);
    ~rent_check();

private slots:
    void on_date_valueChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::rent_check *ui;

    QSqlQuery query;
    QSqlRecord rec;
    string query_string;

    string car_name;
    string grade;
    string id;
    int total;
    int price;
    int cash;
    int count;
    int date;
};

#endif // RENT_CHECK_H
