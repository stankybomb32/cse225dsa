#include "timestamp.h"
#include <iostream>
using namespace std;

TimeStamp::TimeStamp()
{
    t = new Time;
    t->seconds = 0;
    t->minutes = 0;
    t->hours = 0;
}

TimeStamp::TimeStamp(int ss, int mm, int hh)
{
    t = new Time;
    t->seconds = ss;
    t->minutes = mm;
    t->hours = hh;
}

int TimeStamp::getSec()
{
    return t->seconds;
}
int TimeStamp::getMin()
{
    return t->minutes;
}
int TimeStamp::getHrs()
{
    return t->hours;
}

bool TimeStamp::operator<(TimeStamp ts)
{
    if (t->hours < ts.getHrs())
    {
        return true;
    }
    else if(t->minutes < ts.getMin())
    {
        return true;
    }
    else{
        return (t->seconds < ts.getSec());
    }
}

bool TimeStamp::operator>(TimeStamp ts)
{
    if (t->hours > ts.getHrs())
    {
        return true;
    }
    else if(t->minutes > ts.getMin())
    {
        return true;
    }
    else{
        return (t->seconds > ts.getSec());
    }
}

bool TimeStamp::operator==(TimeStamp ts)
{
    return ((t->hours == ts.getHrs()) && (t->minutes == ts.getMin()) && (t->seconds == ts.getSec()));
}

bool TimeStamp::operator!=(TimeStamp ts)
{
    return !(*this == ts);
}

void TimeStamp::Print()
{
    cout << getSec() << ":" << getMin() << ":" << getHrs() << endl;
}


