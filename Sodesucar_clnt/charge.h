#ifndef CHARGE_H
#define CHARGE_H

#include <QDialog>
#include "database.h"

using namespace std;

namespace Ui {
class charge;
}

class charge : public QDialog
{
    Q_OBJECT

public:
    explicit charge(vector<string> data, QWidget *parent = nullptr);
    ~charge();

private slots:
    void on_ok_btn_clicked();

    void on_exit_btn_clicked();

private:
    Ui::charge *ui;
    vector<string> data;
    int pay;
    QSqlQuery query;
    std::string query_string;
};

#endif // CHARGE_H
