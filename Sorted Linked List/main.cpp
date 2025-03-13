#include <iostream>
#include "sortedtype.cpp"
using namespace std;

int main()
{
    SortedType<int> nums;
    nums.Insert(12);
    nums.Insert(7);
    nums.Insert(20);
    nums.Insert(15);
    nums.Delete(12);

    for(int i=0; i<nums.GetLen();i++)
    {
        cout << nums.GetNext() << endl;
    }
    nums.ResetPos();
    nums.MakeEmpty();
    return 0;
}
