#include <iostream>
#include "src/dynArr.cpp"

using namespace std;

int main()
{
    dynArr<int> list;
    list.insert(2);
    list.insert(5);
    list.insert(1);
    for (int i=0;i<list.getLen();i++)
    {
        cout << list.getNext();
    }

    list.~dynArr();
    return 0;
}
