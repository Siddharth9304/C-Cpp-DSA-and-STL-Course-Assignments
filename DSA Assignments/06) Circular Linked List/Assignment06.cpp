#include<iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};

class CLL
{
    private:
        node *last;
    public:
        CLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node *, int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~CLL();
};
CLL::CLL()
{
    last = nullptr;
}
void CLL::insertAtStart(int data)
{
    node *n = new node;
    n->item = data;
    if(last)
    {
        n->next = last->next;
        last->next = n;
    }
    else
    {
        n->next = n;
        last = n;
    }
}
void CLL::insertAtLast(int data)
{
    node *n = new node;
    n->item = data;
    if(last)
    {
        n->next = last->next;
        last->next = n;
    }
    else
        n->next = n;
    last = n;
}
node* CLL::search(int val)
{
    if(last)
    {
        node *temp = last->next;
        do
        {
            if(temp->item == val)
                return temp;
            temp = temp->next;
        }
        while(temp!=last->next);
    }
    return nullptr;
}
void CLL::insertAfter(node *t, int data)
{
    if(t)
    {
        node *n = new node;
        n->item = data;
        n->next = t->next;
        t->next = n;
        if(t==last)
            last = n;
    }
}
void CLL::deleteFirst()
{
    if(last)
    {
        if(last->next!=last)
        {
            node *temp = last->next;
            last->next = temp->next;
            delete temp;
        }
        else
        {
            delete last;
            last = nullptr;
        }
    }
}
void CLL::deleteLast()
{
    if(last)
    {
        if(last->next!=last)
        {
            node *temp = last->next;
            while(temp->next!=last)
                temp = temp->next;
            temp->next = last->next;
            delete last;
            last = temp;
        }
        else
        {
            delete last;
            last = nullptr;
        }
    }
}
/*
void CLL::deleteNode(int val)
{
    node *t = search(val);
    if(t)
    {
        if(t==last)
            deleteLast();
        else if(t==last->next)
            deleteFirst();
        else
        {
            node *temp = last->next;
            while(temp->next!=t)
                temp = temp->next;
            temp->next = t->next;
            delete t;
        }
    }
}*/
/*
void CLL::deleteNode(int val)
{
    node *t = search(val);
    if(t)
    {
        if(last->next!=last)
        {
            node *temp = last;
            while(temp->next!=t)
                temp = temp->next;
            temp->next = t->next;
            delete t;
            if(t==last)
                last=temp;
        }
        else
        {
            delete last;
            last = nullptr;
        }
    }
}*/
void CLL::deleteNode(int val)
{
    node *t = search(val);
    if(t)
    {
        if(t==last)
            deleteLast();
        else
        {
            node *temp = last;
            while(temp->next!=t)
                temp = temp->next;
            temp->next = t->next;
            delete t;
        }   
    }
}
CLL::~CLL()
{
    while(last)
        deleteFirst();
}


