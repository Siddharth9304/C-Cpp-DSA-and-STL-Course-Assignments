#include<iostream>
using namespace std;
#define STACK_OVERFLOW 1
#define STACK_UNDERFLOW 0 
void swap(int &a, int &b)
{
    a += b;
    b = a-b;
    a -= b;
}
class Stack
{
    private:
        int capacity;
        int top;
        int *ptr;
        int *min;
    protected:
        void trackMin();     //this function has made to call only as a last line of the push function.
    public:
        Stack(int);
        void push(int);
        int pop();
        int peek();
        ~Stack();
        bool isStackFull();
        bool isStackEmpty();
        void reverse();
        int noElements();
        int getCapacity();
        Stack& operator=(Stack &);
};
Stack::Stack(int cap)
{
    capacity = cap;
    top=-1;
    ptr = new int[capacity];
    min = new int[capacity];
}
void Stack::push(int data)
{
    if(isStackFull())
        throw STACK_OVERFLOW;
    ptr[++top] = data;
    trackMin();
}
int Stack::pop()
{
    if(isStackEmpty())
        throw STACK_UNDERFLOW;
    --top;
    return ptr[top+1];
}
int Stack::peek()
{
    if(isStackEmpty())
        throw STACK_UNDERFLOW;
    return ptr[top];
}
Stack::~Stack()
{
    if(ptr)
        delete []ptr;
}
bool Stack::isStackFull()
{
    return top+1==capacity;
}
bool Stack::isStackEmpty()
{
    return top==-1;
}
void Stack::reverse()
{
    for(int i=0; i<capacity/2; i++)
        swap(ptr[i],ptr[top-i]);
}
void Stack::trackMin()
{
    if(top>=0)
        if(top==0)
            min[0] = ptr[top];
        else if(ptr[top]<=min[top-1])
            min[top] = ptr[top];
        else
            min[top] = min[top-1];
}
int Stack::noElements()
{
    return top+1;
}
int Stack::getCapacity()
{
    return capacity;
}
Stack& Stack::operator=(Stack &s)
{
    capacity = s.capacity;
    top = s.top;
    min = s.min;
    if(ptr)
        delete []ptr;
    ptr = new int[capacity];
    for(int i=0; i<=top; i++)
        ptr[i] = s.ptr[i];
    return *this;
}
void reverseStack(Stack &stk)
{
    Stack s(stk.getCapacity());
    while(stk.isStackEmpty())
        s.push(stk.pop());
    stk = s;
}
