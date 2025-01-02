#include<iostream>
using namespace std;
#define UNDERFLOW 0

struct node
{
    int item;
    int priority;
    node *next;
};
class PriorityQueue
{
    private:
        node *start;
    public:
        PriorityQueue();
        void insert(int, int);
        int del();
        int getHighestPriorityElement();
        int getHighestPriorityNo();
        ~PriorityQueue();
        bool isEmpty();
};
PriorityQueue::PriorityQueue()
{
    start = nullptr;
}
void PriorityQueue::insert(int data, int p)
{
    node *n = new node;
    n->item = data;
    n->priority = p;
    if(start && n->priority <= start->priority)
    {
        node *temp = start;
        while(temp->next && n->priority <= temp->next->priority)
            temp = temp->next;
        n->next = temp->next;
        temp->next = n;
    }
    else
    {
        n->next = start;
        start = n;
    }
}
int PriorityQueue::del()
{
    if(start)
    {
        int data = start->item;
        node *temp = start;
        start = start->next;
        delete temp;
        return data;
    }
    throw UNDERFLOW;
}
int PriorityQueue::getHighestPriorityElement()
{
    if(start)
        return start->item;
    throw UNDERFLOW;
}
int PriorityQueue::getHighestPriorityNo()
{
    if(start)
        return start->priority;
    throw UNDERFLOW;
}
PriorityQueue::~PriorityQueue()
{
    while(start)
        del();
}
bool PriorityQueue::isEmpty()
{
    return !start;
}