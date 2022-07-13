#include "sock_connect.h"

tcp::tcp(QObject* obj) : QThread(obj)
{
    sock = get_sock();
}

tcp::~tcp()
{
    close_sock(sock);
}

void tcp::run()
{
    char rcv_msg[1024];
    while(true)
    {
        read(sock, rcv_msg, sizeof(rcv_msg));
        emit setMsg(QString(rcv_msg));
    }
}

int get_sock()
{
    struct sockaddr_in serv_addr;
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr("10.10.20.231");
    serv_addr.sin_port = htons(atoi("9020"));

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) == -1)
    {
        qDebug()<<"connect error";
        return -1;
    }
    else
        return sock;
}

void close_sock(int sock)
{
    close(sock);
}

