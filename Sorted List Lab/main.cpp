#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.h"
using namespace std;

int main()
{
    SortedType<TimeStamp> times;
    times.InsertItem(TimeStamp(15,34,23));
    times.InsertItem(TimeStamp(13,13,02));
    times.InsertItem(TimeStamp(43,45,12));
    times.InsertItem(TimeStamp(25,36,17));
    times.InsertItem(TimeStamp(52,02,20));

    times.DeleteItem(TimeStamp(25,36,17));

    TimeStamp ts;
    for (int i=0; i<times.LengthIs(); i++)
    {
        times.GetNextItem(ts);
        ts.Print();
    }


}
