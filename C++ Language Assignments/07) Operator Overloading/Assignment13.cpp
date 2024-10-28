#include<iostream>
using namespace std;

//1. FRACTION CLASS
class fraction
{
    private:
        long numerator;
        long denominator;
    public:
        fraction(long n=0, long d=0);
        void setNum(long, long);
        void showNum();
        fraction operator+(fraction);
        bool operator<(fraction);
};
fraction::fraction(long n, long d)
{
    setNum(n,d);
}
void fraction::setNum(long n, long d)
{
    numerator = n;
    denominator = d;
}
void fraction::showNum()
{
    if(denominator<0)
        cout << -numerator << '/' << -denominator << endl;
    else
        cout << numerator << '/' << denominator << endl;
}
fraction fraction::operator+(fraction f)
{
    fraction temp;
    temp.numerator = numerator*f.denominator + f.numerator*denominator;
    temp.denominator = denominator*f.denominator;
    return temp;
}
bool fraction::operator<(fraction f)
{
    if(denominator*f.denominator>0)
        return numerator*f.denominator<f.numerator*denominator;
    else
        return numerator*f.denominator>f.numerator*denominator;
}

//3. DISTANCE CLASS
class Distance
{
    private:
        int km, m, cm;
    public:
        Distance(int=0, int=0, int=0);
        void setDistance(int, int, int);
        void showDistance();
        Distance operator+(Distance);
        Distance normalizeDist();
        Distance operator--();
        Distance operator--(int);
};
Distance::Distance(int x, int y, int z)
{
    setDistance(x,y,z);
}
void Distance::setDistance(int x, int y, int z)
{
    if(x<0)
        km = -x;
    else    
        km = x;
    if(y<0)
        m = -y;
    else    
        m = y;
    if(z<0)
        cm = -z;
    else    
        cm = z;
}
void Distance::showDistance()
{
    if(m>=1000||cm>=100)
    {
        Distance temp;
        temp = *this;
        temp.normalizeDist();
        cout << temp.km << " km " << temp.m << " m " << temp.cm << " cm "; 
    }
    else
        cout << km << " km " << m << " m " << cm << " cm ";   
}
Distance Distance::normalizeDist()
{
    m += cm/100;
    cm = cm%100;
    km += m/1000;
    m = m%1000;
    return *this;
}
Distance Distance::operator+(Distance d)
{
    Distance temp;
    temp.cm = cm + d.cm;
    temp.m = m + d.m;
    temp.km = km + d.km;
    if(temp.m>=1000||temp.cm>=100)
        temp.normalizeDist();
    return temp;
}
Distance Distance::operator--()
{
    if(km==0&&m==0&&cm==0)
        return *this;
    cm--;
    if(cm<0)
    {
        cm = 99;
        m = m-1;
        if(m<0)
        {
            m = 999;
            km = km-1;
        }
    }
    if(m>=1000||cm>=100)
        normalizeDist();
    return *this;
}
Distance Distance::operator--(int)
{
    if(km==0&&m==0&&cm==0)
        return *this;
    Distance temp=*this;
    cm--;
    if(cm<0)
    {
        cm = 99;
        m = m-1;
        if(m<0)
        {
            m = 999;
            km = km-1;
        }
    }
    if(m>=1000||cm>=100)
        normalizeDist();
    return temp;
}


//5. CLASS ARRAY
class Array
{
    private:
        int *p,size;
    public:
        Array(int s):size(s)
        {
            p = (int*)calloc(size,sizeof(int));
        }
        int& operator[](int n)
        {
            return *(p+n);
        }
        ~Array()
        {
            free(p);
        }
};






int main1()
{
    fraction f1(2,4),f2(2,-4),f3(-2,4),f4(-2,-4),f5,f6,f7;
    f1.showNum();
    f2.showNum();
    f3.showNum();
    f4.showNum();
    f5 = f1+f2;
    f6 = f1+f3;
    f7 = f1+f4;
    f5.showNum();
    f6.showNum();
    f7.showNum();
    cout << (f1<f2) << endl << (f2<f4);
}

int main3()
{
    Distance d1(3,0,0),d2(3,2000,420),d3,d4;
    d4 = d1--;
    d1.showDistance();
}


int main()
{
    
}