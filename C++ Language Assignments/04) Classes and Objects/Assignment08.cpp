#include<iostream>
using namespace std;

// Q1. Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number.
class Complex
{
    private:
        int r,i;
    public:
        void setValues(int a, int b)
        {
            r=a;
            i=b;
        }
        void showValue()
        {
            cout << r << " + " << i << "i" ;
        }
};

//Q2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.
class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int a,int b, int c)
        {
            if(a<0)
                h=-1*a;
            else
                h = a;
            
            if(b>=0 && b<=60)
                m = b;
            else
                m=0;

            if(c>=0 && c<=60)
                s=c;
            else
                s=0;
        }
        void displayTime()
        {
            cout << h << " hr " << m << " m " << s << " sec";
        }
};

//Q3. Define a class Date to represent date (like d=31, m=12, y=2022). Declare appropriate number of instance member variables and also define instance member functions to set date and get date.
class Date
{
    private:
        int d,m,y;
    public:
        void setDate(int a, int b, int c)
        {
            if(a>0 && a<32)   
                d=a;
            else    
                d=1;
            
            if(b>0 && b<13)
                m=b;
            else    
                m=1;
            
            if(c<0)
                y=-1*c;
            else
                y=c;
        }
        void getDate()
        {
            cout << "d=" << d << ", m=" << m << ", y=" << y;
        }
        void getDate1();
        void getDate2();
};

/*Q4. In question 3, define a methods to display date in the following pattern
1. 31-12-2022
2. 31-Dec-2022
*/
void Date::getDate1()
        {
            cout << d << "-" << m << "-" << y;
        }
void Date::getDate2()
        {
            switch(m)
            {
                case 1:
                    cout << d << "-Jan-" << y;
                    break;
                case 2:
                    cout << d << "-Feb-" << y;
                    break;
                case 3:
                    cout << d << "-Mar-" << y;
                    break;
                case 4:
                    cout << d << "-Apr-" << y;
                    break;
                case 5:
                    cout << d << "-May-" << y;
                    break;
                case 6:
                    cout << d << "-Jun-" << y;
                    break;
                case 7:
                    cout << d << "-Jul-" << y;
                    break;
                case 8:
                    cout << d << "-Aug-" << y;
                    break;
                case 9:
                    cout << d << "-Sep-" << y;
                    break;
                case 10:
                    cout << d << "-Oct-" << y;
                    break;
                case 11:
                    cout << d << "-Nov-" << y;
                    break;
                case 12:
                    cout << d << "-Dec-" << y;
                    break;
            }
        }
/*Q5. Define a class Circle with radius as its property. Provide setRadius() and getRadius() methods. 
Also define methods to return area and circumference of circle.*/
class Circle
{
    private:
        int r;
    public:
        void setRadius(int a)
        {
            if(a<0)
                r = -1*a;
            else
                r = a;
        }
        void getRadius()
        {
            cout << r;
        }
        float area()
        {
            return 3.14*r*r;
        }
        float circumference()
        {
            return 2*3.14*r;
        }
};

int main()
{
    Complex c1;
    c1.setValues(-2,5);
    c1.showValue();
    cout << endl << endl;
    Time t1;
    t1.setTime(-4,-6,18);
    t1.displayTime();
    cout << endl << endl;
    Date d1;
    d1.setDate(12,8,2022);
    d1.getDate();
    cout << endl;
    d1.getDate1();
    cout <<endl;
    d1.getDate2();
    cout << endl << endl;
    Circle cir1;
    cir1.setRadius(-3);
    cir1.getRadius();
    cout << endl;
    cout << cir1.area();
    cout << endl;
    cout << cir1.circumference();

    return 0;
}