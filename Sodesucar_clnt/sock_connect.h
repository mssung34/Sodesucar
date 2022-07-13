#ifndef SOCK_CONNECT_H
#define SOCK_CONNECT_H
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <cstring>
#include <QDebug>
#include <unistd.h>
#include <QThread>

class tcp : public QThread
{
public:
    explicit tcp(QObject* obj = 0);
    ~tcp();

private:
    int sock;
    void run();

signals:
    void setMsg(QString msg);
};

int get_sock();

void close_sock(int sock);
#endif // SOCK_CONNECT_H
