#ifndef TOUR_H
#define TOUR_H

#include <QDialog>
#include "database.h"

namespace Ui {
class tour;
}

class tour : public QDialog
{
    Q_OBJECT

public:
    explicit tour(QWidget *parent = nullptr);
    ~tour();
    void show_tourlist();

private slots:
    void on_exit_btn_clicked();

private:
    Ui::tour *ui;

    QSqlQuery query;
    QSqlRecord rec;
    std::string query_string;
};

#endif // TOUR_H
