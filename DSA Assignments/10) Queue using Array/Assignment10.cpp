#include<iostream>
using namespace std;
#define OVERFLOW 1
#define UNDERFLOW 0
#define INVALID_SIZE -1 

class Queue
{
    private:
        int capacity;
        int front;
        int rear;
        int *arr;
    public:
        Queue(int);
        void insert(int);
        bool isFull();
        bool isEmpty();
        int getFront();
        int getRear();
        void del();
        ~Queue();
        int count();
};
Queue::Queue(int cap)
{
    capacity = cap;
    rear = -1;
    front = -1;
    arr = new int[capacity];
}
void Queue::insert(int data)
{
    if(isFull())
        throw OVERFLOW;
    if(isEmpty())
    {
        arr[++rear] = data;
        front++;
    }
    else
    {
        if(rear==capacity-1)
            rear = 0;
        else
            rear++;
        arr[rear] = data;
    }
}
bool Queue::isFull()
{
    return (front==0 && rear==capacity-1) || (rear==front-1);
}
bool Queue::isEmpty()
{
    return front == -1;
}
int Queue::getFront()
{
    if(isEmpty())
        throw UNDERFLOW;
    return arr[front];
}
int Queue::getRear()
{
    if(isEmpty())
        throw UNDERFLOW;
    return arr[rear];
}
void Queue::del()
{
    if(isEmpty())
        throw UNDERFLOW;
    if(front==rear)
    {
        front = -1;
        rear = -1;
    }
    else if(front==capacity-1)
        front=0;
    else
        front++;
}
int Queue::count()
{
    if(rear>=front)
        return rear-front+1;
    else
        capacity-front+rear+1;
}
Queue::~Queue()
{
    delete []arr;
}