#include<stdio.h>

//Q1. Write a function to calculate the factorial of a number.(TSRS)
int factorial(int n)
{
    int fact = 1;
    for(int i=2; i<=n; i++)
        fact *= i;
    return fact;
}
//Q2. Write a function to calculate the number of combiations one can make from n items and r selected at a time.(TSRS)
int nCr(int n, int r)
{
    return factorial(n)/factorial(r)/factorial(n-r);
}
//Q3. Write a function to calculate the number of arrangements one can make from n items and r selected at a time.(TSRS)
int nPr(int n, int r)
{
    return factorial(n)/factorial(n-r);
}
//Q4. Write a function to check whether a given number contains a given digit or not.(TSRS)
int has_contain(int n, int d)
{
    while(n>0)
        if(n%10==d)
            return 1;
        else
            n /= 10;
    return 0;
}
//Q5. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3.(TSRN)
void primeFactors(int n)
{
    int i,j;
    for(i=2; ; i++)
    {  
        for(j=2; j<i; j++)
            if(j%i == 0)
                break;
        if(j==i)
        {
            while(n%i==0)
            {
                n /= i;
                if(n != 1)
                    printf("%d, ",i);
                else
                    printf("%d.",i);
            }
            if(n==1)
                break;
        }
    }
        
}

int main1()
{
    printf("%d",factorial(15));
    return 0;
}



