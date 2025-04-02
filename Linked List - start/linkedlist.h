#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

template <class ItemType>
class LinkedList
{
public:
    struct Node{
        ItemType data;
        Node* next;
    };
    LinkedList();
    void add(ItemType); //inserts in the beginning
    void append(ItemType); //inserts in the end
    bool get(ItemType);
    int getLen();
    ItemType getNext();
    void resetPos();
    void print();
    void delFirst();
    void delLast();
private:
    Node* head;
    int length = 0;
    Node* pos;
};

#endif // LINKEDLIST_H_INCLUDED
