#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QtCore>
#include <QtNetwork>
#include <QString>

namespace Ui {
class Server;
}

class Server : public QMainWindow
{
    Q_OBJECT
public:
    explicit Server(QWidget *parent = nullptr);
    ~Server();

signals:
    void dataReceived(QByteArray);

private slots:
    void newConnection();
    void disconnected();
    void readyRead();

private:
    Ui::Server *ui;
    QTcpServer *server;
    QHash<QTcpSocket*, QByteArray*> buffers; //We need a buffer to store data until block has completely received
    QHash<QTcpSocket*, qint32*> sizes; //We need to store the size to verify if a block has received completely
};
#endif // SERVER_H
