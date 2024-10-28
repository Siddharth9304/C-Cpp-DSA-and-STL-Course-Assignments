#include<stdio.h>
//Q1. Write a program to check whether a given number is 3 digit number or not.
/*
int main()
{
    int n = 1000;
    if(n/1000 == 0 &&  n/100 != 0)
    printf("given number is a 3 digit number");
    else
    printf("given number is not a 3 digit number");

    return 0;
}*/

//Q2. Write a program to print greater between two numbers.Print one number if both are the same.
/*
int main()
{
    int a,b;
    printf("Enter two numbers to check which is greater : ");
    scanf("%d%d",&a,&b);

    if(a > b)
    printf("%d",a);
    else
    printf("%d",b);

    return 0;
}*/


//Q3. Write a program to check whether the roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.
/*
int main()
{
    int a,b,c,d;
    printf("Enter coefficients of a quadratic equation in order : ");
    scanf("%d%d%d",&a,&b,&c);
    d = b*b - 4*a*c;

    if(d > 0)
    printf("given quadratic equation have real and distinct roots");
    else if(d == 0)
    printf("given quadratic equation have real and equal roots");
    else
    printf("given quadratic equation have imaginary roots");

    return 0;
}*/

//Q4. Write a program to check whether a given year is a leap year or not.
/*
int main()
{
    int y;
    printf("Enter a year to check whether it is a leap year or not : ");
    scanf("%d",&y);

    if(y%100)
        if (y%4)
            printf("%d is not a leap year",y);
        else
            printf("%d is a leap year",y);
    else
        if (y%400)
            printf("%d is not a leap year",y);
        else
            printf("%d is a leap year",y);
    
    return 0;
}*/

//Q5. Write a program to print greatest among three given numbers.Print number once if the greatest number appears two or three times.

int main()
{
    int a,b,c;
    printf("Enter three numbers to find greatest among them : ");
    scanf("%d%d%d",&a,&b,&c);

    printf("%d",a>b ? a>c?a:c : b>c?b:c);

    return 0;
}
