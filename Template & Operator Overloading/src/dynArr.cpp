#include "dynArr.h"
template <typename T>
dynArr<T>::dynArr()
{
    *length = 0;
    *pos = -1;
    T *data = new T[50];
}
template <typename T>
void dynArr<T>::insert(T val)
{
    data[*length] = val;
    (*length)++;
}

template <typename T>
void dynArr<T>::rmInd(int num)
{
    for(int i=num; i<(*length)-1; i++)
    {
        data[i] = data[i+1];
    }
    (*length)--;

}
template <typename T>
T dynArr<T>::getNext()
{
    (*pos)++;
    return data[*pos];
}

template <typename T>
int dynArr<T>::getLen()
{
    return *length;
}

template <typename T>
dynArr<T>::~dynArr()
{
    delete length;
    delete pos;
    delete data;
}
