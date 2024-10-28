#include<stdio.h>

//Q1. Write a program to check whether a given number is positive, negative or zero.
/*
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n > 0)
    printf("given number is positive");
    else if(n < 0)
    printf("given number is negative");
    else
    printf("given number is zero");

    return 0;
}*/

//Q2. Write a program to check whether a given character is an alphabet(uppercase), an alphabet(lowercase), a digit or a special character.

int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);

    if((c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126))
    printf("special character");
    else if(c >= 48 && c <= 57)
    printf("given character is a digit");
    else if(c >= 65 && c <= 90)
    printf("given character is an alphabet(uppercase)");
    else if(c >= 97 && c <= 122)
    printf("given character is an alphabet(lowercase)");
    else
    printf("given character is not something from these four things \"an alphabet(uppercase), an alphabet(lowercase), a digit or a special character\" ");

    return 0;

}

//Q3. Write a program which takes the length of the sides of a triangle as an input.Display whether the triangle is valid or not.
/*
int main()
{
    int a, b, c;
    printf("Enter length of the sides of a triangle : ");
    scanf("%d%d%d",&a,&b,&c);

    if((a + b > c) && (a + c > b) && (b + c > a))
    printf("Valid Triangle");
    else
    printf("Not a Valid Triangle");

    return 0;
}*/

//Q4. Write a program which takes the month number as an input and display number of days in that month.
/*
int main()
{
    int n;
    printf("Enter a month number : ");
    scanf("%d",&n);
    if(n == 2)
    printf("28 days usually but 29 days if leap year");
    else if(n == 4 || n == 6 || n == 9 || n == 11)
    printf("30 days");
    else if (n > 12 || n < 1)
    printf("Invalid month number");
    else 
    printf("31 days");
    
    return 0;

}*/