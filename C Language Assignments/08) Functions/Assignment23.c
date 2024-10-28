#include<Stdio.h>

//Q1. Write a function to calculate LCM of two numbers. (TSRS)
int LCM(int a, int b)
{
    int i,h=a>b?a:b;
    for(i=h; i%a || i%b; i+=h);
    return i;
}

//Q2. Write a function to calculate HCF of two numbers. (TSRS)
int HCF(int a, int b)
{
    int i;
    for(i=a<b?a:b; a%i || b%i; i--);
    return i;
}

//Q3. Write a function to check whether a given number is prime or not.(TSRS)
int isPrime(int n)
{
    int i;
    for(i=2;i<n && n%i;i++);
    if(n==i)
        return 1; 
    else
        return 0;
}

//Q4. Write a function to find the next prime number of a given number.(TSRS)
/*int nextPrime(int n)
{
    int i;
    for(n++; ;n++)
     if(isprime(n))                                         //reuse functions
        return n;
}
*/
//Q5. Write a function to print first N prime numbers.(TSRN)
/*void firstNprime(int c)
{
    int count=0,n,i;
    for(n=2; count<c; n++)
        if(isprime(n))
        {
            printf("%d ",n);
            count++;
        }
}
*/


int main()
{
    printf("%d",isPrime(2313));
    return 0;
}