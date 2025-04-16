#include <iostream>
#include "binarysearchtree.h"
using namespace std;

template <class Itemtype>
BinarySearchTree<Itemtype>::BinarySearchTree()
{
    root = NULL;
}

template <class Itemtype>
void Insert(Node<Itemtype>*& tree, Itemtype data){
    if(tree == NULL){
        tree = new Node<Itemtype>;
        tree->left = NULL;
        tree->right = NULL;

        tree->info = data;
    }
    else if(data < tree->info)
    {
        Insert(tree->left, data);
    }
    else if(data > tree->info)
    {
        Insert(tree->right, data);
    }
}

template <class Itemtype>
void BinarySearchTree<Itemtype>::InsertItem(Itemtype data)
{
    Insert(root, data);
}

template <class Itemtype>
void PrintNode(Node<Itemtype>*& tree){
    if(tree->left != NULL)
    {
        PrintNode(tree->left);
    }
    if (tree->right != NULL)
    {
        PrintNode(tree->right);
    }
    cout << tree->info << "\t";
}

template <class Itemtype>
void BinarySearchTree<Itemtype>::Print()
{
    PrintNode(root);
}