#include "user.h"
#include "ui_user.h"
#include "charge.h"
#include <string>

user::user(std::string id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user)
{
    ui->setupUi(this);
    this->id = id;

    show_userdata();
}

user::~user()
{
    delete ui;
}

void user::show_userdata()
{
    query_string = "SELECT * FROM userTBL WHERE ID='" + id + "'";
    query.exec(QString::fromStdString(query_string));
    query.next();
    ui->id_text->setText(query.value(0).toString());
    ui->pw_text->setText(query.value(1).toString());
    ui->name_text->setText(query.value(2).toString());
    ui->phone_text->setText(query.value(3).toString());
    ui->grade_label->setText("Grade : " + query.value(4).toString());
    ui->cash_label->setText("Cash : " + query.value(5).toString());
    cash = std::stoi(query.value(5).toString().toStdString());
    ui->point_label->setText("Point : " + query.value(6).toString());
    point = std::stoi(query.value(6).toString().toStdString());

    if(point >= 100000 && query.value(4).toString() == "normal")
    {
        query_string = "UPDATE userTBL SET grade='premium' WHERE ID='" + id + "'";
        query.exec(QString::fromStdString(query_string));
        QMessageBox::information(this, "", "premium 등급으로 상승하셨습니다.");
        ui->grade_label->setText("Grade : premium");
    }
    else if(point >= 500000)
    {
        if(query.value(4).toString() == "normal" || query.value(4) == "premium")
        {
            query_string = "UPDATE userTBL SET grade='vip' WHERE ID='" + id + "'";
            query.exec(QString::fromStdString(query_string));
            QMessageBox::information(this, "", "vip 등급으로 상승하셨습니다.");
            ui->grade_label->setText("Grade : vip");
        }
    }
}

void user::on_charge_btn_clicked()
{
    std::vector<std::string> data;
    data.push_back(id);
    data.push_back(std::to_string(cash));
    data.push_back(std::to_string(point));
    charge cg(data);
    cg.setModal(true);
    cg.exec();
    show_userdata();
}

void user::on_edit_btn_clicked()
{
    query_string = "UPDATE userTBL SET PW='" + ui->pw_text->text().toStdString() + "', name='" + ui->name_text->text().toStdString()
            + "', phone='" + ui->phone_text->text().toStdString() + "' WHERE ID='" + id + "'";
    query.exec(QString::fromStdString(query_string));
    QMessageBox::information(this, "", "수정 완료.");
}

void user::on_exit_btn_clicked()
{
    this->close();
}
