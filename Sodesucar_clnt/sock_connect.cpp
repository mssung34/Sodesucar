#include "sock_connect.h"

int open_sock()
{
    struct sockaddr_in serv_addr;
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr("10.10.20.231");
    serv_addr.sin_port = htons(atoi("9021"));

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) == -1)
    {
        qDebug()<<"connect error";
    }
    return sock;
}

tcp::tcp(QObject* parent) : QThread(parent)
{
    sock = open_sock();
}

tcp::~tcp()
{
}

void tcp::run()
{
    char msg[1024];
    while(recv(sock, msg, sizeof(msg), 0) != -1)
    {
        emit tcp::setMsg(QString(msg));
        memset(msg, 0, sizeof(msg));
    }
}

