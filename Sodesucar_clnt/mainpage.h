#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QDialog>
#include "tour.h"
#include "rent.h"
#include "user.h"
#include "reservation.h"
#include "chat.h"

namespace Ui {
class mainpage;
}

class mainpage : public QDialog
{
    Q_OBJECT

public:
    explicit mainpage(std::string id, QWidget *parent = nullptr);
    ~mainpage();

private slots:
    void on_rent_btn_clicked();

    void on_tour_btn_clicked();

    void on_user_btn_clicked();

    void on_exit_btn_clicked();

    void on_reservation_btn_clicked();

    void on_shop_btn_clicked();

    void on_chat_btn_clicked();

private:
    Ui::mainpage *ui;
    std::string id;
};

#endif // MAINPAGE_H
