#include<stdio.h>
#include"c:\Users\prem\OneDrive\Desktop\C, C++, DSA and STL\Assignments\22) Functions\Assignment22.c"
int isPrime(int n)
{
    int i;
    for(i=2;i<n && n%i;i++);
    if(n==i)
        return 1; 
    else
        return 0;
}
//Q1. Write a function to print all prime numbers between two given numbers.(TSRN)
void prime(int x, int y)
{
    int n,b;
    b = x>y?x:y;
    for(n=x<y?x+1:y+1; n<b; n++)
    {  
        if(isPrime(n))
            printf("%d ",n);
    }
}
//Q2. Write a function to print first N terms of Fibonacci series.(TSRN)
void fibonacci(int n)
{
    int a,b,c,i;
    a=-1,b=1;
    for(i=1; i<=n; i++)
    {
        c = a+b;
        printf("%d\n",c);
        a = b;
        b = c;
    }
}
//Q3. Write a function to print pascal triangle.(TSRN)
void pascal(int rows)
{
    int i,j,flag,r,n;
    for(i=1; i<=rows; i++)
    {  
        flag=1,r=0,n=i-1;
        for(j=1; j<=2*rows-1; j++)
            if(j>=rows+1-i && j<=rows-1+i)
            {   
                if(flag)
                    printf("%d ",nCr(n,r++));
                else
                    printf("  ");
                flag = 1-flag;
            }       
            else
                printf("  ");
        printf("\n");
    }
}
//Q4. Write a function to print all armstrong numbers between two given numbers.(TSRN)
void armsrtong(int x,int y)
{
    int count=0,p,i,sum=0,r,c;
    int m = x>y?x:y;
    for(int n = x<y?x+1:y+1; n<m; n++)
    {   
        count=0,sum=0;
        for(c=n; c; c/=10)
            count++;
        for(c=n; c; c/=10)
        {
            r = c%10;
            for(p=1,i=1; i<=count; i++)         //next time do this ques with top down approach
                p *= r;
            sum += p;
        }
        if(sum == n)
            printf("%d ",n);
    }
}

//Q5. Write a functio to find the sum of first N terms of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + ...... + n!/n
int sum(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
        sum = sum + factorial(i)/i;
    return sum;
}
int sum2(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        int fact=1;
        for(int j=1; j<=i; j++)
            fact = fact * j;
        sum = sum + fact/i;
    }
    return sum;
}


int main()
{
    pascal(6);
    return 0;
}