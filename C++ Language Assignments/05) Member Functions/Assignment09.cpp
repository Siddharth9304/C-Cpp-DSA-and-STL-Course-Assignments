#include<iostream>
using namespace std;

//Q1.
class Complex
{
    private:
        int a,b;
    public:
        void setData(int,int);
        void showData();
        Complex add(Complex);
        Complex subtract(Complex);
        Complex multiply(Complex);
};

void Complex::setData(int x, int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout << a << " + (" << b << ")i";
}
Complex Complex::add(Complex x)
{
     Complex c;
     c.a = a + x.a;
     c.b = b + x.b;
     return c;
}
Complex Complex::subtract(Complex x)
{
    Complex c;
    c.a = a - x.a;
    c.b = b - x.b;
    return c;
}
Complex Complex::multiply(Complex x)
{
    Complex c;
    c.a = a*x.a - b*x.b;
    c.b = b*x.a + a*x.b;
    return c;
}

class Time
{
    int h,m,s;
    public:
        void setTime(int,int,int);
        void showTime();
        void normalize();
        Time add(Time);
        bool is_greater(Time);
};

void Time::setTime(int x, int y, int z)
{
    if(x>0)
        h = x;
    else
        h = -1*x;
    if(y>0)
        m = y;
    else
        m = -1*y;
    if(z>0)
        s = z;
    else
        s = -1*z;
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
Time Time::add(Time x)
{
    Time t;
    t.h = h + x.h;
    t.m = m + x.m;
    t.s = s + x.s;
    t.normalize();
    return t;
}
bool Time::is_greater(Time x)
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

//Q3.

class Matrix
{
    private:
        int row1[3];
        int row2[3];
        int row3[3];
    public:
        void setRow1(int, int, int);
        void setRow2(int, int, int);
        void setRow3(int, int, int);
        void setElement(int, int, int);
        void setMatrix(int arr[]);
        Matrix add(Matrix);
        Matrix subtract(Matrix);
        Matrix multiply(Matrix);
        Matrix transpose();
        bool is_singular();
        
};
void Matrix::setRow1(int a=0, int b=0, int c=0)
{
    row1[0] = a;
    row1[1] = b;
    row1[2] = c;
}
void Matrix::setRow2(int a=0, int b=0, int c=0)
{
    row2[0] = a;
    row2[1] = b;
    row2[2] = c;
}
void Matrix::setRow3(int a=0, int b=0, int c=0)
{
    row3[0] = a;
    row3[1] = b;
    row3[2] = c;
}
void Matrix::setElement(int i, int j, int v)
{
    int *mat[3] = {row1, row2, row3};
    mat[i][j] = v;
}
void Matrix::setMatrix(int arr[])
{
    setRow1(arr[0],arr[1],arr[2]);
    setRow2(arr[3],arr[4],arr[5]);
    setRow3(arr[6],arr[7],arr[8]);
}
Matrix Matrix::add(Matrix mat)
{
    Matrix m;
    for(int i=0; i<3; i++)
        m.row1[i] = row1[i] + mat.row1[i];
    for(int i=0; i<3; i++)
        m.row2[i] = row2[i] + mat.row2[i];
    for(int i=0; i<3; i++)
        m.row3[i] = row3[i] + mat.row3[i];
    
    return m;
}
Matrix Matrix::subtract(Matrix mat)
{
    Matrix m;
    for(int i=0; i<3; i++)
        m.row1[i] = row1[i] - mat.row1[i];
    for(int i=0; i<3; i++)
        m.row2[i] = row2[i] - mat.row2[i];
    for(int i=0; i<3; i++)
        m.row3[i] = row3[i] - mat.row3[i];
    
    return m;
}
Matrix Matrix::multiply(Matrix mat)
{
    Matrix m;
    
}

int main()
{
   /*Complex c1,c2,c3,c4,c5;
    c1.setData(3,-2);
    c2.setData(4,-4);
    c5 = c1.multiply(c2);
    c5.showData();
    cout << endl; */

    /*Time t1,t2,t3;
    t1.setTime(-12,-240,-61);
    t1.normalize();
    t1.showTime();*/

    int arr[] = {1,2,3};
    int arr2[][3] = {{1,2,3},{2,32,32},{321,32,312}};
    Matrix m1;
    m1.setRow1(1,2,3);
    m1.setRow2(1,2);
    m1.setRow3(2);
}
