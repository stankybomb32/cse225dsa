#include "linkedlist.h"
#include <iostream>
using namespace std;

template <class ItemType>
LinkedList<ItemType>::LinkedList()
{
    head = NULL;
}


template <class ItemType>
int LinkedList<ItemType>::getLen(){
    return length;
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
void LinkedList<ItemType>::append(ItemType item)
{
    Node* newNode;
    newNode = new Node;
    newNode->data = item;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else {
        Node* location;
        location = head;
        while(location->next != NULL)
        {
            location = location->next;
        }
        location->next = newNode;
    }
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
bool LinkedList<ItemType>::get(ItemType item)
{
    if(head == NULL)
    {
        return false;
    }
    else {
        Node* location = head;
        while(location->next != NULL)
        {
            if (location->data == item)
            {
                return true;
            }
            location = location->next;
        }
        return false;
    }

}


template <class ItemType>
void LinkedList<ItemType>::resetPos()
{
    pos = head;
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


template <class ItemType>
void LinkedList<ItemType>::delFirst()
{
    if(head == NULL)
    {
        // does nothing
    }
    else{
        Node* temp = head;
        head = temp->next;
        delete temp;
        length--;
    }
}

template <class ItemType>
void LinkedList<ItemType>::delLast()
{
    if(head == NULL)
    {
        // does nothing
    }
    else{
        Node* location = head;
        Node* temp = location->next;
        if(temp == NULL)
        {
            head = NULL;
            delete location;
        }
        else{
            while(temp->next != NULL)
            {
                temp = temp->next;
                location = location->next;
            }
            location = NULL;
            delete temp;
            length--;
        }
    }
}
