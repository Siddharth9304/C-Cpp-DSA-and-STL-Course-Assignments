#include<stdio.h>

//Q1. Write a program to calculate size of a charactar costant.
/*
int main()
{
    int x;
    x = sizeof('a');
    printf("%d",x);
    
    return 0;
}*/

//Q2. Write a program to calculate size of a real constant.
/*
int main()
{
    int x;
    x = sizeof(2.3);
    printf("%d",x);

    return 0;
}*/

//Q3. Write a program with one char type variable.Assign 'A' in the variable.Now change the value of variable from 'A' to 'B' using increment operator.
/*
int main()
{
    char c = 'A';
    c++;
    printf("%c",c);
}
*/

//Q4. Write a program to swap values of two int variables.
/*
int main()
{
    int a,b;
    a = 2;
    b = 6;
    
    printf("before swapping : a = %d, b = %d\n",a,b);
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("after swapping : a = %d, b = %d",a,b);

    return 0;
}*/

//Q5. Write a program to swap values of two int variables without using a third variable.
/*
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("%d %d\n",a,b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d",a,b);

    return 0;
    
}*/

//Q6. Write a program to swap values of two int variables without using a third variable and without using +,- operator.
/*
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("%d %d\n",a,b);

    a = a*b;
    b = a/b;
    a = a/b;
    printf("%d %d",a,b);

    return 0;
}*/

//Q7. Write a program to swap values of two int variables without using third variable and arithmetic operators.
/*
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("%d %d\n",a,b);

    a += b;
    b -= a;
    b *= -1;
    a -= b;
    printf("%d %d",a,b);

    return 0;
}*/

//Q8. Write a program to swap values of two int variables in single line arithmetic expression.

int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("%d %d\n",a,b);

    a -= b = (b -= a += b) * -1;
    printf("%d %d",a,b);

    return 0;
}