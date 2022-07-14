#ifndef SOCK_CONNECT_H
#define SOCK_CONNECT_H
#include <cstring>
#include <QDebug>
#include <unistd.h>
#include <QThread>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <QDebug>

int open_sock();

class tcp : public QThread
{
    Q_OBJECT
public:
    explicit tcp(QObject* parent = 0);
    ~tcp();
    int sock;

private:
    void run();

signals:
    void setMsg(QString msg);
};


#endif // SOCK_CONNECT_H
