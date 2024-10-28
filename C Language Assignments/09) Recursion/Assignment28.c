#include<stdio.h>

//Q1. Write a recursive function to calculate factorial of a given number.
int factorial(int n)
{
    if(n==1||n==0)
        return 1;
    return n * factorial(n-1);
}
//Q3. Write a recursive function to print first N terms of a fibonacci series.
int factorial1(int n)
{
    if(n==1||n==0)
        return 1;
    return n * factorial(n-1);
}
//Q4. Write a program to count the digits of a given number using recursion.
int countDigits(int n)
{
    if(n==0)
        return 0;
    return 1 + countDigits(n/10);
}
//Q5. Write a program to calculate the power of any number using recursion.
int power(int m, int n)
{
    if(n==0)
        return 1;
    return m * power(m,n-1);
}



int main()
{
    printf("%d",power(0,3));
    return 0;   
}