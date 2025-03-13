#include <iostream>
#include "sortedList.h"
using namespace std;


sortedList::sortedList()
{
    length = 0;
}

void sortedList::insert(int num)
{
    int j = length - 1;
    while (j >= 0 && data[j] > num)
    {
        data[j + 1] = data[j];
        j--;
    }
    data[j + 1] = num;
    length++;
}

int sortedList::search(int value )
{
    int first, middle, last;
    first = 0;
    last = length - 1;
    while (true)
    {
        middle = (first + last) / 2;
        if (data[middle] == value)
            return middle;
        else if (first >last)
            return -1;
        else if (value < data[middle])
            last = middle - 1;
        else
            first = middle + 1;
    }
}

void sortedList::remove(int num)
{
    int index = -1;

    for (int i = 0; i < length; i++)
    {
        if (data[i] == num)
        {
            index = i;
            break;
        }
        else if (data[i] > num)
        {
            break;
        }
    }

    if (index == -1) return;

    for (int i = index; i < length - 1; i++)
    {
        data[i] = data[i + 1];
    }

    length--;
}

void sortedList::print()
{
    for (int i=0; i<length; i++)
    {
        cout << data[i] << "\t";
    }
    cout << endl;
}
