#include<iostream>
using namespace std;
#define UNDERFLOW 0
struct node
{
    int item;
    node *next;
};
class Queue
{
    private:
        node *front;
        node *rear;
    public:
        Queue();
        void enQueue(int);
        int getRear();
        int getFront();
        void deQueue();
        ~Queue();
        int no_Elements();
};
Queue::Queue()
{
    front = nullptr;
    rear = nullptr;
}
void Queue::enQueue(int data)
{
    node *n = new node;
    n->item = data;
    n->next = nullptr;
    if(rear)
        rear->next = n;
    else
        front = n;
    rear = n;
}
int Queue::getRear()
{
    if(rear)
        return rear->item;
    throw UNDERFLOW;
}
int Queue::getFront()
{
    if(front)
        return front->item;
    throw UNDERFLOW;
}
void Queue::deQueue()
{
    if(front)
    {
        if(front==rear)
        {
            delete front;
            front = nullptr;
            rear = nullptr;
        }
        else
        {
            node *temp = front;
            front = front->next;
            delete temp;
        }
    }
    else
        throw UNDERFLOW;
}
Queue::~Queue()
{
    while(front)
        deQueue();
}
int Queue::no_Elements()
{
    node *temp = front;
    int count = 0;
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
