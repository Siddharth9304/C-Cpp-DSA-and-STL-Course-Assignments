#include<iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};
class SLL
{
    private:
        node *start;
    public:
        SLL();
        void insertAtFirst(int);
        void insertAtLast(int);
        void insertAfter(node *, int);
        node* search(int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~SLL();
};
SLL::SLL()
{
    start = nullptr;
}
void SLL::insertAtFirst(int data)
{
    node *n = new node;
    n->item = data;
    n->next = start;
    start = n;
}
void SLL::insertAtLast(int data)
{
    node *n = new node;
    n->item = data;
    n->next = nullptr;
    if(start)
    {
        node *temp = start;
        while(temp->next)
            temp = temp->next;
        temp->next = n;
    }
    else
        start = n;
}
void SLL::insertAfter(node *t, int data)
{
    if(t)
    {
        node *n = new node;
        n->item = data;
        n->next = t->next;
        t->next = n;
    }
}
node* SLL::search(int val)
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
void SLL::deleteFirst()
{
    if(start)
        if(start->next)
        {
            node *temp = start;
            start = start->next;
            delete temp;
        }
        else
        {
            delete start;
            start = nullptr;
        }
}
void SLL::deleteLast()
{
    if(start)
        if(start->next)
        {
            node *temp = start;
            while(temp->next->next)
                temp = temp->next;
            delete temp->next;
            temp->next = nullptr;
        }
        else
        {
            delete start;
            start = nullptr;
        }
}
/*
void SLL::deleteNode(int val)
{
    if(start)
        if(start->item==val)
            deleteFirst();
        else
        {
            node *t = start;
            while(t->next)
                if(t->next->item == val)
                {
                    node *temp = t->next;
                    t->next = t->next->next;
                    delete temp;
                    break;
                }
                else
                    t = t->next;
        }
}*/
void SLL::deleteNode(int val)
{
    if(start)
    {
        node *temp1 = search(val);
        if(temp1)
        {
            if(start==temp1)
                deleteFirst();
            else
            {
                node *temp2 = start;
                while(temp2->next!=temp1)
                    temp2 = temp2->next;
                temp2->next = temp1->next;
                delete temp1;
            }
        } 
    }
}
SLL::~SLL()
{
    while(start)
        deleteFirst();
}
