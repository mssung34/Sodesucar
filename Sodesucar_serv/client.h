#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QtCore>
#include <QtNetwork>

namespace Ui {
class Client;
}

class Client : public QMainWindow
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

public slots:
    bool connectToHost(QString host);
    bool writeData(QByteArray data);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Client *ui;
    QTcpSocket *socket;
    bool fd_flag = false;
    bool send_flag = false;
    int cnt = 0;
};

#endif // CLIENT_H
