#include<stdio.h>

//Q1. Write a C program to check whether a given number is even or odd.
int main1()
{
    int n;
    scanf("%d",&n);
    if(n%2)
        printf("%d is a odd number\n",n);
    else
        printf("%d is a even number\n",n);
}

//Q2. Write a C program to calculate factorial of a number.
int factorial(int n)
{
    if (n==0)
        return 1;
    else    
       return n * factorial(n-1);
}
int main2()
{
    int n;
    scanf("%d",&n);
    int fact = factorial(n);
    printf("factorial of %d = %d",n,fact);
}

//Q3. Write a C program to swap values of two int variables.
void swap(int *x, int *y)
{
    
}
int main3()
{
    int a = 5;
    int b = 10;
    
    a = a+b;
    b = a-b;
    a = a-b;

    printf("%d %d",a,b);
}

//Q4. Write a C function to calculate LCM of two numbers.(TSRS)
int lcm(int a, int b)
{
    int lcm,max = a>b?a:b;
    for(lcm = max; lcm%a||lcm%b; lcm+=max);
    return lcm;
}
int main4()
{
    printf("%d",lcm(31,100));
}


//Q5. Write a function to check whether a given number is a prime number or not.
int isPrime(int n)
{
    int i;
    if(i<=1)
        return 0;
    for(i=2; n%i; i++);
    if(i==n)
        return 1;
    else
        return 0;
}

int main()
{
    printf("%d",isPrime(1));
}