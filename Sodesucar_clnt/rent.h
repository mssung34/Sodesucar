#ifndef RENT_H
#define RENT_H

#include <QDialog>
#include "database.h"
#include "rent_check.h"
#include <QMessageBox>

namespace Ui {
class rent;
}

class rent : public QDialog
{
    Q_OBJECT

public:
    explicit rent(std::string id, QWidget *parent = nullptr);
    ~rent();
    void show_carlist(std::string type);

private slots:
    void on_rent_btn_clicked();

    void on_exit_btn_clicked();

    void on_all_clicked();

    void on_diesel_clicked();

    void on_gasoline_clicked();

    void on_lpg_clicked();

    void on_elec_clicked();

private:
    Ui::rent *ui;

    QSqlQuery query;
    QSqlRecord rec;
    std::string query_string;

    std::string id;
    std::string type;
    int cash;
};

#endif // RENT_H
