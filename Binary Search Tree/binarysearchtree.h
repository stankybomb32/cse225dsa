#include <iostream>
using namespace std;

template <class Itemtype>
struct Node{
        Itemtype info;
        Node* left;
        Node* right;
    };
template <class Itemtype>
class BinarySearchTree
{
    
    public:
    BinarySearchTree();
    void InsertItem(Itemtype);
    bool SearchItem(Itemtype);
    void DeleteItem(Itemtype);
    void Print();

    private:
    Node<Itemtype>* root;
    
};