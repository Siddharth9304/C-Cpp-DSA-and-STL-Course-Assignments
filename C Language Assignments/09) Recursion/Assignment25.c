#include<stdio.h>

//Q1. Write a recursive function to print first N natural numbers.
void firstNnatural1(int n)
{
    if (n==1)
        printf("%d\n",n);
    else                                  // isme <=0 ke liye infinite time recursion ho rha hai vaise uska bhi solution hai uppar condition lagadena 
    {
        firstNnatural1(n-1);
        printf("%d\n",n);
    }
}
void firstNnatural2(int n)
{
    if (n>0)                              //zyada acha hai
    {
        firstNnatural2(n-1);
        printf("%d\n",n);
    }
}
//Q2. Write a recursive function to print first N natural numbers in reverse order.
void firstNnaturalr1(int n)
{
    if (n==1)
        printf("%d\n",n);
    else
    {
        printf("%d\n",n);
        firstNnaturalr1(n-1);
    }
}
void firstNnaturalr2(int n)
{
    if (n>0)                              //zyada acha hai
    {
        printf("%d\n",n);
        firstNnaturalr2(n-1);
    }
}
//Q3. Write a recursive function to print first N odd natural numbers.
void firstNoddnatural1(int n)
{
    if (n==1)
        printf("%d\n",1);
    else
    {
        firstNoddnatural1(n-1);
        printf("%d\n",2*n-1);
    }
}
void firstNoddnatural2(int n)
{
    if (n>0)
    {
        firstNoddnatural2(n-1);
        printf("%d\n",2*n-1);
    }
}
//Q4. Write a recursive function to print first N odd natural numbers in reverse order.
void firstNoddnaturalr1(int n)
{
    if (n==1)
        printf("%d\n",n);
    else
    {
        printf("%d\n",2*n-1);
        firstNoddnaturalr1(n-1);
    }
}
void firstNoddnaturalr2(int n)
{
    if (n>0)
    {
        printf("%d\n",2*n-1);
        firstNoddnaturalr2(n-1);
    }
}
//Q5. Write a recursive function to print first N even natural numbers.
void firstNevennatural1(int n)
{
    if (n==1)
        printf("%d\n",2);
    else
    {
        firstNevennatural1(n-1);
        printf("%d\n",2*n);
    }
}
void firstNevennatural2(int n)
{
    if (n>0)
    {
        firstNevennatural2(n-1);
        printf("%d\n",2*n);
    }
}


int main()
{
    firstNevennatural2(5);
    return 0;
}