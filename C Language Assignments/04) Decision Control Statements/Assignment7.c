#include<stdio.h>

//Q1. Write a program to check whether a given number is positive or non positive.
/*
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n > 0)
    printf("given number is positive");
    else
    printf("given number is non-positive");

    return 0;
}*/

//Q2. Write a program to check whether a given number is divisible by 5 or not.
/*
int main()
{
    int n;
    printf("Enter a number to check whether it is divisble by 5 or not : ");
    scanf("%d",&n);

    if(n % 5)
    printf("given number is not divisble by 5");
    else
    printf("given number is divisible by 5.");
}
*/
//Q3. Write a program to check whether a given number is even or odd.
/*
int main()
{
    int n;
    printf("Enter a number to check even or odd : ");
    scanf("%d",&n);

    if(n % 2)
    printf("given number is odd.");
    else
    printf("given number is even.");

    return 0;
}*/

//Q4. Write a program to check whether a given number is even or odd without using % operator.

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n/2 == (n+1)/2)
    printf("given number is even");
    else
    printf("given number is odd");

    return 0;
}

// Q5. Write a program to check whether a number is even or odd using bitwise operator.
/*
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n & 1)
    printf("given number is odd");
    else
    printf("given number is even");

    return 0;
}*/