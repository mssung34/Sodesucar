#ifndef CAR_H
#define CAR_H

#include <QDialog>
#include "mainpage.h"

namespace Ui {
class car;
}

class car : public QDialog
{
    Q_OBJECT

public:
    explicit car(QWidget *parent = nullptr);
    ~car();
    void show_all();
    void show_gasoline();
    void show_disel();
    void show_elec();
    void show_lpg();
    void show_list();

private slots:
    void on_out_btn_clicked();

    void on_fix_btn_clicked();

    void on_all_clicked();

    void on_gasoline_clicked();

    void on_disel_clicked();

    void on_elec_clicked();

    void on_lpg_clicked();

private:
    Ui::car *ui;
    QSqlQuery query;
    QSqlRecord record;
    std::string query_string;
};

#endif // CAR_H
