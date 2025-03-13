#include "sortedtype.h"
#include <iostream>
using namespace std;

template <class ItemType>
SortedType<ItemType>::SortedType()
{
    Head = NULL;
    length = 0;
    Pos = Head;
}

template <class ItemType>
void SortedType<ItemType>::Insert(ItemType item)
{
    Node* location;
    Node* prevLocation;
    Node* newNode = new Node;
    bool moreToSearch;

    location = Head;
    prevLocation = NULL;
    moreToSearch = (location != NULL);

    while(moreToSearch)
    {
        if (location->info < item)
        {
            prevLocation = location;
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else
        {
            moreToSearch = false;
        }
    }

    newNode->info = item;
    newNode->next = location;

    if(prevLocation==NULL)
    {
        Head = newNode;
    }
    else
    {
        prevLocation->next = newNode;
    }

    length++;
}

template <class ItemType>
ItemType SortedType<ItemType>::GetNext()
{
    ItemType item;
    if (Pos == NULL)
    {
        Pos = Head;
    }
    item = Pos->info;
    Pos = Pos->next;
    return item;

}

template <class ItemType>
void SortedType<ItemType>::Delete(ItemType item)
{
    Node* prevLocation;
    Node* location;
    bool found = false;

    prevLocation = NULL;
    location = Head;

    while((location != NULL)&& !found)
    {
        if(location->info == item)
        {
            found = true;
        }
        else
        {
            prevLocation = location;
            location = location->next;
        }
    }
    if(found)
    {
        if(location == Head)
        {
            Head = location->next;
            ;
        }
        else
        {
            prevLocation->next = location->next;

        }
        delete location;
        length--;
    }
}

template <class ItemType>
int SortedType<ItemType>::GetLen()
{
    return length;
}

template <class ItemType>
void SortedType<ItemType>::ResetPos()
{
    Pos = Head;
}

template <class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
    Node* location;
    while (Head!=NULL)
    {
        location = Head;
        Head = Head->next;
        delete location;
    }
    length = 0;
}
