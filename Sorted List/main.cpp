#include <iostream>
#include "sortedList.h"

using namespace std;

int main()
{
    sortedList L;
    L.insert(3);
    L.insert(7);
    L.insert(5);
    L.print();
    L.remove(5);
    L.print();

    cout << L.search(7);
    return 0;
}
