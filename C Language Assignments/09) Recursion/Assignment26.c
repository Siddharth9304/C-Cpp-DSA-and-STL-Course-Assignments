#include<stdio.h>

//Q1. //Q4. Write a recursive function to print first N even natural numbers in reverse order.
void firstNevennaturalr1(int n)
{
    if (n==1)                   //isme neg value or 0 par infinite recursion hoga
        printf("%d\n",2);
    else
    {
        printf("%d\n",2*n);
        firstNevennaturalr1(n-1);
    }
}
void firstNevennaturalr2(int n)
{
    if (n>0)                   //neg value or 0 par infinite recursion nhi hoga
    {
        printf("%d\n",2*n);
        firstNevennaturalr2(n-1);
    }
}
//Q2. Write a recursive function to print the squares of first N natural numbers.
void squarefirstNnatural1(int n)
{
    if (n==1)
        printf("%d\n",1);
    else
    {
        squarefirstNnatural1(n-1);
        printf("%d\n",n*n);
    }
}
void squarefirstNnatural2(int n)
{
    if(n>0)
    {
        squarefirstNnatural2(n-1);
        printf("%d\n",n*n);
    }
}
//Q.3 Write a function to print binary of a given decimal number.
void dtob(int n)
{
    if(n==1 || n==0)
        printf("%d",n); 
    else
    {
        dtob(n/2);
        printf("%d",n%2);
    }
}
//Q.3 Write a function to print octal of a given decimal number.
void octal(int n)
{
    if(n>=0)
        if(n>=0 && n<8)
        printf("%d",n); //you can also write n%8 in place of n but har baar ans n hi aayega to kyun calcultion badhani 
        else
        {
            octal(n/8);
            printf("%d",n%8);
        }
}

//Q5. Write a recursive function to print reverse of a given number.
void reverse1(int n)
{
    if(n)                  //isme neg value par infinite recursion hoga
     {
        printf("%d",n%10);
        reverse1(n/10);
    }
}
void reverse2(int n)
{
    if(n>0)               //neg value par infinite recursion nhi hoga 
     {
        printf("%d",n%10);
        reverse2(n/10);
    }
}

int main()
{

}
