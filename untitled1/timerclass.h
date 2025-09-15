#ifndef TIMERCLASS_H
#define TIMERCLASS_H
#include<QTimer>
#include<QObject>
#include<QDebug>
class TimerClass:public QObject
{
        Q_OBJECT
public:
    TimerClass();

private slots:
      void timerslot();
private:
    QTimer *timer;
    int timecout;
};

#endif // TIMERCLASS_H
