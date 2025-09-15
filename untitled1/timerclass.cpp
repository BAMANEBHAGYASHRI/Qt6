#include "timerclass.h"

TimerClass::TimerClass() {
    timer=new QTimer;
    timer->start(1000);
    connect(timer , SIGNAL(timeout()) ,this , SLOT(timerslot()));

     int timecount=0;
}

void TimerClass::timerslot()
{
    qDebug() << "timer ----" << timecout;
    timecout++;
}
