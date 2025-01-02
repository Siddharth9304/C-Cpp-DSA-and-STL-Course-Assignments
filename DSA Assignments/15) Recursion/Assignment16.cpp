#include<iostream>
using namespace std;
#define INVALID_INPUT 0

void swap(int &a, int &b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}
//1
int sumFirstN(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    if(N==1)
        return 1;
    return N + sumFirstN(N-1);
}

//2
int sumFirstNodd(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    if(N==1)
        return 1;
    return 2*N-1 + sumFirstNodd(N-1);
}

//3
int sumFirstNeven(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    if(N==1)
        return 2;
    return 2*N + sumFirstNeven(N-1);
}

//4
int sumFirstNsquares(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    if(N==1)
        return 1;
    return N*N + sumFirstNsquares(N-1);
}

//5
int factorial(int N)
{
    if(N<0)
        throw INVALID_INPUT;
    if(N==0)
        return 1;
    return N * factorial(N-1);
}

//6
int sumDigits(int N)
{
    if(N<0)
        throw INVALID_INPUT;
    if(N==0)
        return 0;
    return N%10 + sumDigits(N/10);
}
//7
void printBinary(int n)
{
    if(n<0)
        throw INVALID_INPUT;
    if(n==0)
        cout << 0;
    else
    {
        printBinary(n/2);
        cout << n%2;
    }
}
//8
int fibonacci(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    if(N==1)
        return 0;
    if(N==2)
        return 1; 
    return fibonacci(N-2) + fibonacci(N-1);
}

//9
int HCF(int x, int y)
{
    if(x<1 || y<1)
        throw INVALID_INPUT;
    if(x>y)
        swap(x,y);
    if(y%x==0)
        return x;
    return HCF(y%x, x);
}


//10
double power(double x, double y)
{
    if(x==0 && y==0)
        throw INVALID_INPUT;
    if(x==1 || y==0)
        return 1;
    if(x==0)
        return 0;
    return x * power(x, y-1);
}


int main()
{
    printBinary(1);
}