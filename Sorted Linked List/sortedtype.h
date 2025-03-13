#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
template <class ItemType>
class SortedType
{
    struct Node
    {
        ItemType info;
        Node* next;
    };
public:
    SortedType();
    void Insert(ItemType);
    void Delete(ItemType);
    ItemType GetNext();
    int GetLen();
    void ResetPos();
    void MakeEmpty();
private:
    Node* Head;
    int length;
    Node* Pos;
};


#endif // SORTEDTYPE_H_INCLUDED
