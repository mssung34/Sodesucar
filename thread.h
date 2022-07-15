#ifndef THREAD_H
#define THREAD_H

#include <QThread>
class thread:public QThread
{
    Q_OBJECT
public:
    explicit thread(QObject* parent=0);
private:
    void run();
signals:
    void setValue(int tmp);
};

#endif
