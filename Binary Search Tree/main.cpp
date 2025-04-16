#include <iostream>
#include "binarysearchtree.cpp"
using namespace std;

int main()
{
    BinarySearchTree<int> Tree;
    Tree.InsertItem(5);
    Tree.InsertItem(3);
    Tree.InsertItem(7);

    Tree.Print();

    cout << endl;
    cout << Tree.SearchItem(7) << endl;
    cout << Tree.SearchItem(11);
}