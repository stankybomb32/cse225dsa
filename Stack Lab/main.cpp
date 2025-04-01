#include <iostream>
#include "stacktype.cpp"
#include "stacktype.h"
using namespace std;

//function for question 3
void checkBalance(string input) {
    StackType<char> brackets;
    bool result = true;
    try {
        for (int i = 0; i < input.length(); i++) {
            if ((input[i] == '(') || (input[i] == '{') || (input[i] == '[')) {
                brackets.Push(input[i]);
            } else {
                switch (input[i]) {
                    case ')': result = (brackets.Top() == '(');
                              brackets.Pop(); break;
                    case '}': result = (brackets.Top() == '{');
                              brackets.Pop(); break;
                    case ']': result = (brackets.Top() == '[');
                              brackets.Pop(); break;
                }
                if (!result) {
                    throw EmptyStack();
                }
            }
        }
        cout << "Balanced" << endl;
    } catch (...) {
        cout << "Not Balanced" << endl;
    }
}

int main()
{
    // Question 1
    string input = "(a + (b * c)) / d";
    int size1 = input.length();
    string output = "";
    StackType<char> ops;

    for (int i = 0; i < size1; i++)
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
    cout << endl;

    // Question 2
    string exp = "2 3 1 * + 9 -";
    int size2 = exp.length();

    StackType<int> nums;

    for (int i = 0; i < size2; i++) {
        if (exp[i] == ' ') {
            continue;
        }

        else if (isdigit(exp[i])) { // checks if char is a digit
            nums.Push(exp[i] - '0'); // convert to int
        } 
        
        else {
            int operand2 = nums.Top(); 
            nums.Pop();
            int operand1 = nums.Top(); 
            nums.Pop();

            switch (exp[i]) {
                case '+': nums.Push(operand1 + operand2); break;
                case '-': nums.Push(operand1 - operand2); break;
                case '*': nums.Push(operand1 * operand2); break;
                case '/': nums.Push(operand1 / operand2); break;
                
            }
        }
    }

    if (!nums.IsEmpty()) {
        cout << "The result is " << nums.Top() << endl;
    }  // constraint for this code is that it can only use single digit numbers

    // Question 3
    string input2 = "a + b * (c - d)";
    string input3 = "5 + (3 - 2] * {10 + 7)";

    checkBalance(input2);
    checkBalance(input3);
}