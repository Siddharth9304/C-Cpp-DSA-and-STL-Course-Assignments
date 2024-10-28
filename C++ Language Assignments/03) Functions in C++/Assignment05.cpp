#include<iostream>
using namespace std;

//Q1. Define a function to swap data of two int variables using call by reference.
void swap(int &a, int &b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}
//Q2. Write a function using the default argument that is able to add 2 or 3 numbers.
/*int add(int x, int y, int z=0)
{
    return x+y+z;
}*/
//Q3. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.
float area(int r,char s)
{   
    if(s=='c' || s=='C')
        return 3.14*r*r;
    else if(s=='s'||s=='S')
        return r*r;
}
float area(int a, int b, char s)
{
    if(s=='r'||s=='R')
        return a*b;
    else if(s=='t'||s=='T')
        return a*b/2.0;
}

//Q4. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
int max(int a, int b)
{
    return a>b?a:b;
}
int max(float a, float b)
{
    return a>b?a:b;
}

//Q5. Write functions using function overloading to add two numbers having different data types.
int add(int x, int y)
{
    return x+y;
}
double add(double x, double y)
{
    return x+y;
}


int main()
{
    int x=7,y=5;
    cout << add(12.5452,12.5123);
}
