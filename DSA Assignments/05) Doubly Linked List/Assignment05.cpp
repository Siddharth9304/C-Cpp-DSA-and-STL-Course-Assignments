#include<iostream>
using namespace std;

struct node
{
    node *prev;
    int item;
    node *next;
};

class DLL
{
    private:
        node *start;
    public:
        DLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node *, int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~DLL();
};
DLL::DLL()
{
    start = nullptr;
}
void DLL::insertAtStart(int data)
{
    node *n = new node;
    n->prev = nullptr;
    n->item = data;
    n->next = start;
    if(start)
        start->prev = n;
    start = n;
}
void DLL::insertAtLast(int data)
{
    node *n = new node;
    n->item = data;
    n->next = nullptr;
    if(start)
    {
        node *temp = start;
        while(temp->next)
            temp = temp->next;
        n->prev = temp;
        temp->next = n;
    }
    else
    {
        n->prev = nullptr;
        start = n;
    } 
}
node* DLL::search(int val)
{
    node *temp = start;
    while(temp)
    {
        if(temp->item == val)
            return temp;
        temp = temp->next;
    }
    return nullptr;
}
void DLL::insertAfter(node *t, int data)
{
    if(t)
    {
        node *n = new node;
        n->item = data;
        n->prev = t;
        n->next = t->next;
        if(t->next)
            t->next->prev = n; 
        t->next = n;
        
    }
}
void DLL::deleteFirst()
{
    if(start)
        if(start->next)
        {
            start = start->next;
            delete start->prev;
            start->prev = nullptr;
        }
        else
        {
            delete start;
            start = nullptr;
        }
}
void DLL::deleteLast()
{
    if(start)
        if(start->next)
        {
            node *temp = start;
            while(temp->next)
                temp = temp->next;
            temp->prev->next = nullptr;
            delete temp;
        }
        else
        {
            delete start;
            start = nullptr;
        }
}
/*
void DLL::deleteNode(int val)
{
    node *temp = search(val);
    if(temp)
        if(temp->prev==nullptr)
            deleteFirst();
        else if(temp->next==nullptr)
            deleteLast();
        else
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
}*/
void DLL::deleteNode(int val)
{
    node *temp = search(val);
    if(temp)
        if(temp->prev)
            if(temp->next)
            {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                delete temp;
            }
            else
                deleteLast();
        else
            deleteFirst();
}
DLL::~DLL()
{
    while(start)
        deleteFirst();
}


