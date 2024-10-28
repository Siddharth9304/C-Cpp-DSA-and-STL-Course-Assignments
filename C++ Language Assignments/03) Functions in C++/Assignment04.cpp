#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for(int i=2; i<=n; i++)
        fact *= i;
    return fact;
}
int nCr(int n, int r)
{
    return factorial(n)/factorial(r)/factorial(n-r);
}

//Q1. Define a function to print all prime numbers between two given numbers.
void primeNumbers(int x, int y)
{
    int n,i;
    for(n=x+1; n<y; n++)
    {
        if(n<2)
            continue;
        for(i=2; n%i; i++);
        if (i==n)
            cout << n << " ";
    }
}

//Q2. Define a function to find highest value digit in a given number.
int highestValueDigit(int n)
{
    int ans = n%10;
    for(n=n/10 ; n; n/=10)
    {
        if(ans < n%10)
            ans = n%10;
    }
    return ans;
}

//Q3. Define a function to calculate x raised to the power y.
int xPowy(int x, int y)
{
    int ans=x;
    while(--y)
        ans *= x;
    return ans;
}

//Q4. Define a function to print Pascal Triangle upto N lines.
void printPascal(int n)
{
    int i,j,flag,temp;
    for(i=1; i<=n; i++)
    {
       for(j=1,flag=1,temp=-1; j<=2*n-1; j++)
            if(j>=n+1-i && j<=n-1+i){
                if(flag)
                    cout << nCr(i-1,++temp) << ' ';
                else 
                    cout << "  ";
                flag = 1-flag;
            }
            else
                cout << "  ";
        cout << endl;
        
    }
}

//Q5. Define a function to check whether a given number is a term of the fibonacci series or not.
int noInFibonacci(int n)
{
    int secondLast = -1;
    int firstLast = 1;
    int current = 0;
    while(current < n)
    {
        secondLast = firstLast;
        firstLast = current;
        current = secondLast+firstLast;
    }
    if(current == n)
        return 1;
    else 
        return 0;
}

int main()
{
    //primeNumbers(-100,100);  //Q1
    //int ans = highestValueDigit(283948);
    //cout << ans;
    //cout << xPowy(5,6);
    //cout << noInFibonacci(15);
    printPascal(5);

}

