#include<stdio.h>

//Q1. Write a program which takes cost price and selling price of a product from the user.Now calculate and print profit or loss percentage.
/*
int main()
{
    float cp,sp,per;
    printf("Enter cost price and selling price of a product respectively in rupees : ");
    scanf("%f%f",&cp,&sp);

    per = (sp - cp)/cp * 100;
    if(per > 0)
    printf("profit percentage = %f",per);
    else
    printf("loss percentage = %f",-1*per);

    return 0;
}*/

//Q2. Write a program to take marks of 5 subjects from the user.Assume marks are given out of 100 and passing marks is 33.Now display whether the candidate passed the examination or failed.
/*
int main()
{
    int s1,s2,s3,s4,s5;
    printf("Enter marks of your 5 subjects one by one : ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    if(s1<33||s2<33||s3<33||s4<33||s5<33)
    printf("result is failed");
    else
    printf("result is passed");

    return 0;
}*/

//Q3. Write a program to check whether a given alphabet is in uppercase or lowercase.

int main()
{
    char c;
    printf("Enter an alphabet : ");
    scanf("%c",&c);

    if(c >= 65 && c <= 90)
    printf("given alphabet is in uppercase");
    else if(c >=97 && c <= 122)
    printf("given alphabet is in lowercase");
    else
    printf("given character is not an alphabet");

    return 0;
}


//Q4. Write a program to check whether a given number is divisible by 2 and divisible by 3.
/*
int main()
{
    int n;
    printf("Enter a number to check whether it is divisible by 2 and 3 : ");
    scanf("%d",&n);

    if(n % 6)
    printf("%d is not divisble by 2 and 3 simultaneously",n);
    else
    printf("%d is divisble by 2 and 3",n);

    return 0;

}*/

//Q5. Write a program to check whether a given number is divisble by 7 or divisible by 3.
/*
int main()
{
    int n;
    printf("Enter a number to check whether it is divisible by 3 or 7 : ");
    scanf("%d",&n);

    if(n % 3 && n % 7)
    printf("No");
    else
    printf("Yes");

    return 0;
}*/