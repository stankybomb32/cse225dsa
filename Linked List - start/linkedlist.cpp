#include "linkedlist.h"
#include <iostream>
using namespace std;

template <class ItemType>
LinkedList<ItemType>::LinkedList()
{
    head = NULL;
}

template <class ItemType>
void LinkedList<ItemType>::add(ItemType item)
{
    Node* newNode;
    newNode = new Node;
    newNode->data = item;
    newNode->next = head;

    head = newNode;
    length++;
}

template <class ItemType>
ItemType LinkedList<ItemType>::getNext()
{
    ItemType temp;
    if(pos == NULL)
    {
        pos = head;
    }
    temp = pos->data;
    pos = pos->next;

    return temp;
}

template <class ItemType>
void LinkedList<ItemType>::print()
{
    for(int i=0; i<length; i++)
    {
        cout << getNext() << "\t";
    }
    cout << endl;
}


