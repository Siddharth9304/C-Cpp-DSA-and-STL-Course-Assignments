#include <iostream>
#include<string.h>
using namespace std;
//Q1. 
class Cuboid
{
    private:
        int l,b,h;
    public:
        Cuboid(int x=0, int y=0, int z=0)
        {
            l=x; b=y; h=z;
        }
};

//Q2. 
class Customer
{
    private:
        int cust_id;
        string name, email, mobile;
    public:
        Customer(){}
        Customer(int id, string n, string em, string mob)
        {
            cust_id = id;
            name = n;
            email = em;
            mobile = mob;
        }
        void showCustDetails()
        {
            cout << name << endl << email << endl << mobile << endl;
        }
};

//Q3. 
class Time
{
    private:
        int hr, min, sec;
    public:
        Time(int h=0, int m=0, int s=0)
        {
            hr = h;
            min = m;
            sec = s;
        }
        void showTime()
        {
            cout << hr << " hr " << min << " min " << sec << " sec ";
        }
};

//Q4. 
class Book
{
    int book_id;
    string title;
    int price;
    public:
        Book(){}
        Book(int b_id, string t, int p)
        {
            book_id = b_id;
            title = t;
            price = p;
        }
};

//Q5. 
class Complex
{
    float real, imag;
    public:
        Complex(float r, float i)
        {
            real = r;
            imag = i;
        }
        void showData()
        {
            cout << real << " + i(" << imag << ")";
        }
};
int main1()
{
    Complex c(1,2);
    Complex arr[5] = {Complex(1,2),Complex(2,3),Complex(4,5),Complex(2,5),Complex(21.2,21)};
    for(int i=0; i<5; i++)
    {
        arr[i].showData();
        cout << endl;
    }
}

int main()
{
    int a=2;
    float b=4.2;
    b=a;
    cout << b;
}