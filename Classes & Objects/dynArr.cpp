#include "dynArr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
 data = NULL;
 row = 0;
 col = 0;
}
dynArr::dynArr(int r, int c)
{
 data = new int*[r];
 for (int i=0; i<r; i++)
 {
    data[i] = new int[c];
 }
 row = r;
 col = c;
}
dynArr::~dynArr()
{
    for (int i=0; i<row; i++)
    {
        delete [] data[i];
    }
    delete [] data;
}
int dynArr::getValue(int row, int col)
{
 return data[row][col];
}
void dynArr::setValue(int row, int col, int value)
{
 data[row][col] = value;
}

void dynArr::allocate(int r, int c)
{
    for (int i=0; i<row; i++)
    {
        delete [] data[i];
    }
    delete [] data;

data = new int*[r];
 for (int i=0; i<r; i++)
 {
    data[i] = new int[c];
 }
 row = r;
 col = c;

}
