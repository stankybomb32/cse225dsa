#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
class TimeStamp
{
public:
    struct Time
    {
        int seconds, minutes, hours;
    };
    TimeStamp();
    TimeStamp(int,int,int);
    int getSec();
    int getMin();
    int getHrs();
    bool operator>(TimeStamp);
    bool operator<(TimeStamp);
    bool operator==(TimeStamp);
    bool operator!=(TimeStamp);
    void Print();
private:
    Time* t;


};


#endif // TIMESTAMP_H_INCLUDED
