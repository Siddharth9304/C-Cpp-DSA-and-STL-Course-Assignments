#include<stdio.h>
using namespace std;
struct node
{
    node *prev;
    int item;
    node *next;
};
class CDLL
{
    private:
        node *start;
    public:
        CDLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node *, int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~CDLL();
};
CDLL::CDLL()
{
    start = nullptr;
}
void CDLL::insertAtStart(int data)
{
    node *n = new node;
    n->item = data;
    if(start)
    {
        n->prev = start->prev;
        n->next = start;
        start->prev->next = n;
        start->prev = n;
    }
    else
    {
        n->prev = n;
        n->next = n;
    }
    start = n;
}
void CDLL::insertAtLast(int data)
{
    node *n = new node;
    n->item = data;
    if(start)
    {
        n->prev = start->prev;
        n->next = start;
        start->prev->next = n;
        start->prev = n;
    }
    else
    {
        n->prev = n;
        n->next = n;
        start = n;
    } 
}
node* CDLL::search(int val)
{
    if(start)
    {
        node *temp = start;
        do
        {
            if(temp->item == val)
                return temp;
            temp = temp->next;
        } while (temp!=start);  
    }
    return nullptr;
}
void CDLL::insertAfter(node *t, int data)
{
    if(t)
    {
        node *n = new node;
        n->item = data;
        n->prev = t;
        n->next = t->next;
        t->next->prev = n;
        t->next = n;
    }
}
void CDLL::deleteFirst()
{
    if(start)
    {
        if(start->next!=start)
        {
            node *temp = start;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            start = start->next;
            delete temp;
        }
        else
        {
            delete start;
            start = nullptr;
        }
    }
}
void CDLL::deleteLast()
{
    if(start)
    {
        if(start->next!=start)
        {
            node *temp = start->prev;
            temp->prev->next = start;
            start->prev = temp->prev;
            delete temp;
        }
        else
        {
            delete start;
            start = nullptr;
        }
    }
}
void CDLL::deleteNode(int val)
{
    node *temp = search(val);
    if(temp)
    {
        if(temp==start)
            deleteFirst();
        else
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
    }
}
CDLL::~CDLL()
{
    while(start)
        deleteLast();
}