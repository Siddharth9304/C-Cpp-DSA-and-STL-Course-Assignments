#include<stdio.h>

//Q1. Write a function to calculate the area of a circle.(TSRS)
float areaofCircle(float r)
{
    return 3.14*r*r;
}
//Q2. Write a function to calculate simple interest.(TSRS)
float SI(float p, float r, int t)
{
    float si;
    si = p*r*t/100;
    return si;
}
//Q3. Write a function to check whether a given number is even or odd.Return 1 if number is even otherwise return 0.(TSRS)
int is_even1(int n)
{
    if(n%2)
        return 0;
    else
        return 1;
}
int is_even2(int n)
{
    return n%2==0;
}
//Q4. Write a function to print first N natural numbers.(TSRN)
void firstNnatural(int N)
{
    for(int i=1; i<=N; i++)
        printf("%d\n",i);
}
//Q5. Write a function to print first N odd natural numbers.(TSRN)
void firstNodd(int n)
{
    for(int i=1; i<=n; i++)
        printf("%d\n",2*i-1);
}

int main()
{
    firstNodd(-21);
    return 0;
}