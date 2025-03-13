#include <iostream>
#include "dynArr.h"

using namespace std;

int main()
{
    dynArr arr0;
    dynArr arr(5, 3);
    int num;

    arr0.allocate(5, 3);
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> num;
            arr0.setValue(i,j,num);
        }
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << "Element " << i << " " << j << ": " << arr0.getValue(i,j) << endl;
        }
    }

    arr0.~dynArr();
    arr.~dynArr();
    return 0;
}
