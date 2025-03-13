#ifndef SORTEDLIST_H
#define SORTEDLIST_H
#include <iostream>


class sortedList
{
    public:
        sortedList();
        void insert(int);
        int search(int);
        void remove(int);
        void print();
    private:
        int length;
        int data[50];
};

#endif // SORTEDLIST_H
