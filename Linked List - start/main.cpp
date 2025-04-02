#include <iostream>
#include "linkedlist.cpp"

using namespace std;

int main()
{
    LinkedList<int> nums;
    
    nums.add(5);
    nums.add(3);
    nums.add(1);
    
    nums.print();

    nums.append(7);

    nums.print();

    return 0;
}
