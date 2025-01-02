#include<iostream>
using namespace std;
#define EMPTY_DEQUE 0;

struct node 
{
    node *prev;
    int item;
    node *next;
};
class Deque
{
    private:
        node *front;
        node *rear;
    public:
        Deque();
        void insertAtFront(int);
        void insertAtRear(int);
        void deleteFront();
        void deleteRear();
        int getFront();
        int getRear();
        ~Deque();
        bool isEmpty();
};
Deque::Deque()
{
    front = nullptr;
    rear = nullptr;
}
void Deque::insertAtFront(int data)
{
    node *n = new node;
    n->item = data;
    n->prev = nullptr;
    n->next = front;
    if(front)               // checking is Deque empty or not?
        front->prev = n;
    else
        rear = n;
    front = n;
}
void Deque::insertAtRear(int data)
{
    node *n = new node;
    n->item = data;
    n->next = nullptr;
    n->prev = rear;
    if(rear)               // checking is Deque empty or not?
        rear->next = n;
    else
        front = n;
    rear = n;
}
void Deque::deleteFront()
{
    if(front)             // checking is Deque empty or not?
    {
        if(front->next)   // checking does Deque contain more than one node or not?
        {
            front = front->next;
            delete front->prev;
            front->prev = nullptr;
        }
        else
        {
            delete front;
            front = nullptr;
            rear = nullptr;
        }
    }
    else
        throw EMPTY_DEQUE;
}
void Deque::deleteRear()
{
    if(rear)              // checking is Deque empty or not? 
    {
        if(rear->prev)    // checking does Deque contain more than one node or not?
        {
            rear = rear->prev;
            delete rear->next;
            rear->next = nullptr;
        }
        else
        {
            delete rear;
            rear = nullptr;
            front = nullptr;
        }
    }
    else
        throw EMPTY_DEQUE;
}
int Deque::getFront()
{
    if(front)             // checking is Deque empty or not?
        return front->item;
    throw EMPTY_DEQUE;
}
int Deque::getRear()
{
    if(rear)             // checking is Deque empty or not?
        return rear->item;
    throw EMPTY_DEQUE;
}
Deque::~Deque()
{
    while(front)        // checking is Deque empty or not?
        deleteFront();
}
bool Deque::isEmpty()
{
    return !front;
}