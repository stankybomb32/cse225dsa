#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main()
{
    string input = "(a + (b * c)) / d";
    int size = 17;
    string output = "";
    //StackType<char> brackets;
    StackType<char> ops;

    for (int i = 0; i < size; i++)
    {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
        {
            ops.Push(input[i]);
        }
        else if (input[i] == ')' && !ops.IsEmpty())
        {
            cout << ops.Top();
            ops.Pop();
        }
        else if(input[i] == '('){
            // does nothing
        }
        else
        {
            cout << input[i];
        }
    }
    if (!ops.IsEmpty()){
        cout << ops.Top();
        ops.Pop();
        //ensures final operator
    }
}