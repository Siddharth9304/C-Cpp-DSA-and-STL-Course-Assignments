#include<stdio.h>

//Q1. Write a program to print all Prime numbers under 100
/*int main()
{
    for(int n = 2; n <= 100; n++)
    {
        int isprime = 1;
        for(int i = 2; i < n; i++)
        {
            if(n%i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime)
            printf("%d\n",n);
    }

    return 0;
}
int main()
{
    printf("all prime numbers under 100 : \n");
    printf("%d\n",2);
    printf("%d\n",3);
    printf("%d\n",5);
    printf("%d\n",7);
    for(int n = 9; n <= 100; n += 2)
    {
        if(n%2 && n%3 && n%5 && n%7)
            printf("%d\n",n);
        else
            continue;
    }

    return 0;
}*/

//Q2. Write a program to print prime numbers between two numbers.
/*
int main()
{
    int a,b,s,l;
    printf("Enter two numbers to print prime numbers between them : ");
    scanf("%d%d",&a,&b);
    if (a < b)
       { s = a + 1;
        l = b;}

    else
       { s = b + 1;
        l = a;
        }
    
    for( ;s < l; s++)
    {
        int isprime = 1;
        for(int i = 2; i < s; i++)
            {
                if(s%i == 0)
                {
                    isprime = 0;
                    break;
                }
            }
        if(isprime && s > 1)
            printf("%d\n",s);
    }

}*/

//Q3 Write a program to find next prime number of given number.
/*
int main()
{
    int n;
    printf("Enter number to print first prime number just after that : ");
    scanf("%d",&n);

    n++;
    while(1)
    {
        int isprime = 1;
        for(int i = 2; i < n; i++)
        {
            if(n%i)
                continue;
            else
            {
                isprime = 0;
                break;
            }
        }
        if(isprime && n>1)
        {
            printf("%d",n);
            return 0;
        }
        n++;
    }
}
*/

//Q4. Write a program to calculate HCF of two numbers.
/*
int main()
{
    int a,b,hcf;
    printf("Enter two numbers to find their HCF : ");
    scanf("%d%d",&a,&b);

    if(a < b)
    { 
        hcf = a;
    }
    else
    {
        hcf = b;
    }

    for( ; hcf>0; hcf--)
    {
        if(a%hcf || b%hcf)
            continue;
        else
        {
            printf("HCF of %d & %d is %d",a,b,hcf);
            return 0;
        }
    }
    printf("You entered wrong numbers");
    return 0;

}
*/

//Q.5 Write a program to check whether two given numbers are coprime numbers or not.

int main()
{
    int a,b,hcf;
    printf("Enter two numbers to check whether they are coprime numbers or not : ");
    scanf("%d%d",&a,&b);

    if(a < b)
        hcf = a;
    else
        hcf = b;

    for( ; hcf>0; hcf--)
    {
        if(a%hcf || b%hcf)
            continue;
        else
            break;
    }

    if(hcf == 1)
    printf("%d and %d are coprime numbers",a,b);
    else if(hcf > 1)
    printf("%d and %d are not coprime numbers",a,b);
    else
    printf("You entered wrong numbers");

    return 0;
}
/*
int main()
{
    int a,b,s;
    printf("Enter two numbers to check whether they are coprime numbers or not : ");
    scanf("%d%d",&a,&b);

    if(a < b)
        s = a;
    else
        s = b;

    while(s > 1)
    {
        if(a%s == 0 && b%s == 0)
        {
            printf("given numbers are not coprime numbers");
            return 0;
        }
        s--;
    }
    if(s == 1)
    printf("given numbers are coprime");
    else
    printf("You entered wrong numbers");

    return 0;
}
*/

