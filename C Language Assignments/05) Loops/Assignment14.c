#include<stdio.h>

//Q1. Write a program to calculate factorial of a number.
/*
int main()
{
    int n;
    printf("Enter number to calculate factorial : ");
    scanf("%d",&n);
    int fact = 1;
    int i = 2;
    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("%d! = %d",n,fact);
    return 0;
}*/

//Q2. Write a program to count digit in a given number.
/*
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int count = 0;
    while(n > 0)
    {
        count++;
        n /= 10;
    }
    printf("number of digits in a given number are %d",count);
    return 0;
}*/

//Q.3 Write a program to check whether a given number is a prime or not.
/*
int main()
{
    int n;
    printf("Enter number to check whether it is prime or not : ");
    scanf("%d",&n);
    if(n <= 1)
    {   printf("%d is not a prime",n);
        return 0;
    }
    else
        for(int i = 2;i < n;i++)
        {
            if(n%i == 0)
            {
                printf("%d is not a prime number",n);
                return 0;
            }
        }
        printf("%d is a prime number",n);
}*/

//Q.4 Write a program to calculate LCM of two numbers.

int main()
{
    int m,n,lcm;
    printf("Enter two numbers to calculate LCM : ");
    scanf("%d%d",&m,&n);
    int big = n<m ? m : n;
    for(lcm=big; lcm%m || lcm%n; lcm+=big);
    printf("LCM of %d and %d = %d",m,n,lcm);
    return 0;
}

//Q.5 Write a program to reverse a given number.
/*
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int new = 0;
    while(n > 0)
    {
        new = new*10 + n%10;
        n /= 10;
    }
    printf("reverse of a given number = %d",new);
    return 0;
}*/
//Q5 solution using for loop;
/*
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int new;
    for(new = 0; n>0; new=new*10+n%10, n/=10);
    printf("reverse of a given number = %d",new);
    return 0;
}*/