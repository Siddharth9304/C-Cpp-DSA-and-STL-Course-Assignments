#include<iostream>
using namespace std;

//1. COMPLEX CLASS 
class Complex
{
    int real, imag;
    public:
        Complex(int a=0,int b=0):real(a),imag(b)
        {}
        void showNum()
        {
            cout << real << " + i(" << imag << ")"; 
        }
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
Complex operator-(Complex c1,Complex c2)
{
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;
    return temp;
}
Complex operator*(Complex c1,Complex c2)
{
    Complex temp;
    temp.real = c1.real*c2.real - c1.imag*c2.imag;
    temp.imag = c1.imag*c2.real + c1.real*c2.imag;
    return temp;
}


//2,3. TIME CLASS
class Time
{
    int h, m, s;
    public:
        friend istream& operator>>(istream &, Time &);
        friend ostream& operator<<(ostream &, Time);
        Time operator=(Time);
        
};
istream& operator>>(istream &din, Time &t)
{
    cin >> t.h >> t.m >> t.s; 
    return cin;
}
ostream& operator<<(ostream &dout, Time t)
{
    cout << t.h << " hr " << t.m << " min " << t.s << " sec ";
    return cout;
}
Time Time::operator=(Time t)
{
    h=t.h;
    m=t.m;          
    s=t.s; 
    return *this;
}


//4. CLASS ARRAY
class Array
{
    private:
        int *p,size;
    public:
        Array(int s=1):size(s)
        {
            p = (int*)calloc(size,sizeof(int));
        }
        Array(Array &a)
        {
            size = a.size;
            p = (int*)calloc(size,sizeof(int));
            for(int i=0; i<size; i++)
            {
                p[i] = (a.p)[i];
            }
        }
        int& operator[](int n)
        {
            return *(p+n);
        }
        Array operator=(Array &a)
        {
            size = a.size;
            free(p);
            p=(int*)calloc(size,sizeof(int));
            for(int i=0; i<size; i++)
            {
                p[i] = (a.p)[i];
            }
            return *this;
        }
        friend Array operator+(Array &arr1, Array &arr2);
        ~Array()
        {
            free(p);
        }
};
Array operator+(Array &arr1, Array &arr2)
{
    Array temp(arr1.size+arr2.size);
    int i;
    for(i=0; i<arr1.size; i++)
        temp.p[i] = arr1.p[i];
    for( ; i<temp.size; i++)
        temp.p[i] = arr2.p[i-arr1.size];
    return temp;
}
int main()
{
    Array a1(4),a2(4),a3;
    for(int i=0; i<4; i++)
        cin>> a1[i];
    a2 = a1;
    for(int i=0; i<4; i++)
    {
        cout << a2[i] << endl;
    }
    
}

int main1()
{
    Complex c1(2,3),c2(3,-2),c3,c4,c5;
    c3 = c1+c2;
    c4 = c1-c2;
    c5 = c1*c2;
    c3.showNum();
    cout << endl;
    c4.showNum();
    cout << endl;
    c5.showNum();
    cout << endl;
}

int main2()
{
    Time t1,t2,t3;
    cin>>t1>>t2;
    cout << t1 << endl << t2;
    t3=t1=t2;
    cout << endl;
    cout << t1 << endl << t2 << endl << t3;
}