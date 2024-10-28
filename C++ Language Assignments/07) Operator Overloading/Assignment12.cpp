#include<iostream>
using namespace std;

//Q1.
class Complex
{
    private:
        int real;
        int imag;
    public:
        Complex(int=0,int=0);
        Complex operator+(Complex);
        Complex operator-(Complex);
        Complex operator*(Complex);
        bool operator==(Complex);
        void setNumber(int , int);
        void showNumber();
};
Complex::Complex(int r,int i)
        {
            real = r;
            imag = i;
        }
void Complex::setNumber(int r, int i)
        {
            real = r;
            imag = i;
        }
void Complex::showNumber()
{
    cout << real << " + i(" << imag << ")" << endl;
}
Complex Complex::operator+(Complex c)
{
    Complex temp(real+c.real,imag+c.imag);
    return temp;
}
Complex Complex::operator-(Complex c)
{
    Complex temp(real-c.real,imag-c.imag);
    return temp;
}
Complex Complex::operator*(Complex c)
{
    Complex temp(real*c.real-imag*c.imag, real*c.imag+imag*c.real);
    return temp;
}
bool Complex::operator==(Complex c)
{
    if(real==c.real && imag==c.imag)
        return true;
    else
        return false;
}

//Q2., Q.3, Q.4
class Time
{
    private:
        int h,m,s;
    public:
        Time(int a=0,int b=0,int c=0)
        {
            setTime(a,b,c);
        }
        void setTime(int,int,int);
        void showTime();
        void normalize();
        Time operator+(Time);
        bool operator>(Time);
        Time operator++();
};

void Time::setTime(int x, int y, int z)
{
    if(x>=0)
        h = x;
    else
        h = -1*x;
    if(y>=0)
        m = y;
    else
        m = -1*y;
    if(z>=0)
        s = z;
    else
        s = -1*z;
    normalize();
}
void Time::showTime()
{
    cout << h << " hrs " << m << " min " << s << " sec ";
}
void Time::normalize()
{
    m = m + s/60;
    s = s%60;
    h = h + m/60;
    m = m%60;
}
Time Time::operator+(Time x)
{
    Time t;
    t.h = h + x.h;
    t.m = m + x.m;
    t.s = s + x.s;
    t.normalize();
    return t;
}
bool Time::operator>(Time x)
{
    Time t1,t2;
    t1.h = h;
    t1.m = m;
    t1.s = s;
    t2 = x;
    
    t1.normalize();
    x.normalize();
    
    if(t1.h>x.h)
        return 1;
    else if(t1.h < x.h)
        return 0;
    else if(t1.m > x.m)
        return 1;
    else if(t1.m < x.m)
        return 0;
    else if(t1.s > x.s)
        return 1;
    else 
        return 0; 
}
Time Time::operator++()
{
    s++;
    normalize();
}


int main1()
{
   Time t(2,40,50);
}

