#include<iostream>
using namespace std;
#define UNDERFLOW 0
#define EMPTY_STACK 1

struct node
{
    int item;
    node *next;
};
class Stack
{
    private:
        node *top;
    public:
        Stack();
        void push(int);
        int peek();
        int pop();
        bool isEmpty();
        ~Stack();
};
Stack::Stack()
{
    top = nullptr;
}
void Stack::push(int data)
{
    node *n = new node;
    n->item = data;
    n->next = top;
    top = n;
}
int Stack::peek()
{
    if(top)
        return top->item;
    throw EMPTY_STACK;
}
int Stack::pop()
{
    if(top)
    {
        int temp = top->item;
        node *t = top;
        top = top->next;
        delete t;
        return temp;
    }
    throw UNDERFLOW;
}
Stack::~Stack()
{
    while(top)
        pop();
}
bool Stack::isEmpty()
{
    return !top;
}
void reverseStack(Stack &stk)
{
    Stack s1,s2;
    while(!stk.isEmpty())
        s1.push(stk.pop());
    while(!s1.isEmpty())
        s2.push(s1.pop());
    while(!s2.isEmpty())
        stk.push(s2.pop());
}
bool isPalindrome(int num)
{
    int temp = num;
    int count = 0;
    while(temp)
    {
        count++;
        temp /= 10;
    }
    Stack s;
    for(int i=1; i<=count/2; i++)
    {
        s.push(num%10);
        num /= 10;
    }
    if(count%2)
        num /= 10;
    while(num)
    {
        if(num%10 != s.pop())
            return false;
        num /= 10;
    }
    return true;
}
string InfixToPostfix(string Q)
{
    string P;
    Stack s;
    s.push('(');
    Q.append(")");
    for(int i=0; !s.isEmpty(); i++)
    {
        if(Q[i]=='/' || Q[i]=='*' || Q[i]=='+' || Q[i]=='-')
        {
            if(Q[i]=='+'||Q[i]=='-')
                while(s.peek()!='(' && s.peek()!=')')
                {
                    string temp;
                    temp = s.pop();
                    P.append(temp);
                }
            else
                while(s.peek()=='*' || s.peek()=='/')
                {
                    string temp;
                    temp = s.pop();
                    P.append(temp);
                }
            s.push(Q[i]);
        }
        else if(Q[i]=='(')
        {
            s.push('(');
        }
        else if(Q[i]==')')
        {
            while(s.peek()!='(')
            {
                string temp;
                temp = s.pop();
                P.append(temp);
            }
            s.pop();
        }
        else
        {
            string temp;
            temp = Q[i];
            P.append(temp);
        }
    }
    return P;
}
int EvaluatePostfix(string P)
{
    Stack s;
    P.append(")");
    for(int i=0; P[i]!=')'; i++)
    {
        if(P[i]=='/' || P[i]=='*' || P[i]=='+' || P[i]=='-')
        {
            int t1 = s.pop();
            int t2 = s.pop();
            int t;
            if(P[i]=='/')
                t = t2/t1;
            else if(P[i]=='*')
                t = t1*t2;
            else if(P[i]=='+')
                t = t2+t1;
            else
                t = t2-t1;
            s.push(t);
        }
        else
        {
            s.push(P[i]-'0');
        }
    }
    return s.pop();
}
