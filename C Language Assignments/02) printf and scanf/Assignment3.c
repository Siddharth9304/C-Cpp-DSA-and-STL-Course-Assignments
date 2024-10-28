#include<stdio.h>

//Q1. WAP to input a character from the user and print it's ASCII code.
/*
int main()
{
    char c;
    
    printf("Enter a character to check its ASCII code : ");
    scanf("%c",&c);
    printf("the ASCII code of a given character is %d",c);

    return 0;
}*/

//Q2. WAP to input an ASCII code from the user and print its corresponding character.
/*
int main()
{
    int c;
    
    printf("Enter ASCII code to print its corresponding character : ");
    scanf("%d",&c);
    printf("the corresponding character for %d is '%c'",c,c);

    return 0;
}*/

//Q3. WAP to input three characters from the user and display characters with their corresponding ASCII codes
/*
int main()
{
    char a,b,c;

    printf("Enter three charcters to print their ASCII codes : ");
    scanf("%c%c%c",&a,&b,&c);
    printf("'%c' = %d \n'%c' = %d \n'%c' = %d",a,a,b,b,c,c);

    return 0;
}*/

//Q4. WAP to print last digit of a given number.
/*
int main()
{
    int n;

    printf("Enter number : ");
    scanf("%d",&n);
    printf("the last digit of a given number is %d",n%10);

    return 0;
}*/

//Q5. WAP to print a number without its last digit.
int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);
    printf("given number without its last digit is %d",n/10);
    int a = '1';
    printf("%d",a);
    return 0;
}