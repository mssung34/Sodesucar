#include "thread.h"

thread::thread(QObject *parent):QThread(parent)
{

}

void thread::run()
{
    while(1)
    {
        int tmp=function();
        emit setValue(tmp);
        sleep(1);
    }
}
