#include<iostream>
using namespace std;


//1. CLASS PERSON   
class Person
{
    private:
        string name;
        int age;
    public:
        Person(string name, int age)
        {
            this->name = name;
            if(age>=0)
                this->age = age;
            else    
                this->age = -age;
        }
};

//2. CLASS COMPLEX
class Complex
{
    private:
        int a, b;
    public:
        void setData(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
        void showData()
        {
            cout << a << " + i(" << b << ")"; 
        }
};

//3. 
void f1()
{
    Complex *p;
    p = new Complex;
    p->setData(2,-3);
    p->showData();
    delete p;
}


int main()
{
    f1();
}
