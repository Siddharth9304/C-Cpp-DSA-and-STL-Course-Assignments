#include<stdio.h>

//Q1. Write a program to input a three digit number and display the sum of the digits.
/*
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    int temp,sum = 0;
    
    temp = a % 10;
    sum += temp;

    a /= 10;
    temp = a % 10;
    sum += temp;

    a /= 10;
    temp = a % 10;
    sum += temp;

    printf("%d",sum);

    return 0;
}*/

//Q2. Write a program to find the ASCII code of character '+'.
/*
int main()
{
    printf("%d",'+');

    return 0;
}*/

//Q3. Write a program to print size of an int, a float, a char and a double type variable.
/*
int main()
{
    int a; float b; char c; double d;
    printf("%d\n%d\n%d\n%d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));

    return 0;
}*/

//Q4. Write a program to make the last digit of a number stored in a variable as zero.
/*
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    int r;
    r = a % 10;
    a -= r;
    printf("%d",a);

    return 0;
}*/

//Q5. Write a program to input a number from the user and also input a digit.Append a digit in the number and print the resulting number.
int main()
{
    int n,d;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter a digit to append in a number : ");
    scanf("%d",&d);

    printf("%d",n*10+d);

    return 0;

}