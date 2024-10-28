#include<stdio.h>

//Q1 Write a program to calculate sum of first n natural numbers.
/*
int main()
{
    int n;
    printf("Enter 'n' to calculte sum of first n natural numbers : ");
    scanf("%d",&n);
    int sum = 0;
    int i = 1;
    while(i <= n)
    {
        sum += i;
        i++;
    }
    printf("sum of first %d natural numbers = %d",n,sum);
    return 0;
}*/

//Q2. Write a program to calculate first n even natural numbers.
/*
int main()
{
    int n;
    printf("Enter 'n' to calculate sum of first n even natural numbers : ");
    scanf("%d",&n);
    int sum = 0;
    int i = 1;
    while(i <= n)
    {
        sum += 2*i;
        i++;
    }
    printf("Sum of first %d even natural numbers = %d",n,sum);
    return 0;
}
*/

//Q3. Write a program to calculate sum of first n odd natural numbers.
/*
int main()
{
    int n;
    printf("Enter 'n' to calculate sum of first n odd natural numbers : ");
    scanf("%d",&n);
    int sum = 0;
    int i = 1;
    while(i <= n)
    {
        sum += 2*i - 1;
        i++;
    }
    printf("sum of first %d odd natural numbers = %d",n,sum);
    return 0;
}*/

//Q4. Write a program to calculte sum of squares of first n natural numbers.
/*
int main()
{
    int n;
    printf("Enter 'n' to calculate sum of squares of first n natural numbers : ");
    scanf("%d",&n);
    int sum = 0;
    int i = 1;
    while(i <= n)
    {
        sum += i*i;
        i++;
    }
    printf("Sum of squares of first %d natural numbers = %d",n,sum);
    return 0;
} */

//Q5. Write a program to calculate sum of cubes of first n natural numbers.
int main()
{
    int n;
    printf("Enter 'n' to calculate sum of cubes of first n natural numbers : ");
    scanf("%d",&n);
    int sum = 0;
    int i = 1;
    while(i <= n)
    {
        sum += i*i*i;
        i++;
    }
    printf("Sum of cubes of first %d natural numbers = %d",n,sum);
    return 0;
}