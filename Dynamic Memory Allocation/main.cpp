#include <iostream>

using namespace std;

int main()
{
    //size
    int rows = 3;
    int cols[] = {2, 1, 3};

    //initialization
    int **data = new int*[rows];
    int i = 0;
    for(int i = 0; i<rows; i++)
    {
        data[i] = new int[cols[i]];
    }

    //user input
    for (int i =0; i<rows ; i++)
    {
        for (int j=0; j<cols[i]; j++)
        {
            cin >> data[i][j];
        }
    }

    //output
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols[i]; j++)
        {
            cout << "Element " << i << ", " << j << ": " << data[i][j] << endl;
        }
    }
}
