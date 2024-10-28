#include<stdio.h>

//Q1. Write a recursive function to calculate sum of first N natural numbers.
int sumNnatural(int n)
{
    if (n==1 || n==0)
        return n;
    return n + sumNnatural(n-1);
}
//Q2. Write a recursive function to calculate sum of first N odd natural numbers.
int sumNodd(int n)
{
    if (n==1 || n==0)
        return n;
    return 2*n-1 + sumNodd(n-1);
}
//Q3. Write a recursive function to calculate sum of first N even natural numbers.
int sumNeven(int n)
{
    if(n==1 || n==0)
        return 2*n;
    return 2*n + sumNeven(n-1);
}
//Q4. Write a recursive function to calculate sum of squares of first N natural numbers.
int sumNsquare(int n)
{
    if(n==1 || n==0)
        return n;
    return n*n + sumNsquare(n-1);
}
//Q5. Write a recursive function to calculate sum of digits of a given number.
int sumDigits1(int n)
{
    if (n>=0 && n<10)
        return n;
    return n%10 + sumDigits1(n/10);
}
int sumDigits2(int n)
{
    if (n==0)
        return 0;
    return n%10 + sumDigits2(n/10);
}



int main()
{
    printf("%d",sumDigits(11111111));
}