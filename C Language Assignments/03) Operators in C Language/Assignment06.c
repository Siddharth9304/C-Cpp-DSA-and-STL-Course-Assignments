#include<stdio.h>

//Q1. Assume price of 1USD = 84.23 INR.Write a program to take amount in INR and convert it into USD.
/*
int main()
{
    double inr,usd;
    printf("Enter amount in INR to convert it into USD : ");
    scanf("%lf",&inr);

    usd = inr/84.23;

    printf("%lfINR = %lfUSD",inr,usd);

    return 0;
}*/

//Q2. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
/*
int main()
{
    int n;
    printf("Enter a three digit number : ");
    scanf("%d",&n);

    int r;
    r = n % 10 * 100;       //remainder * 100
    n = n/10 + r;           //(remainder * 100) + first two digit of a number
    printf("%d",n);

    return 0;

}*/

//Q3. What will be the value stored in the variable x after executing following statement: x = 10>8>4;
/*
int main()
{
    int x = 10>8>4;
    printf("%d",x);
}*/

//Q4. What will be the value stored in the variable x after executing following statement: x = !2>-2;
/*
int main()
{
    int x = !2>-2;
    printf("%d",x);
}
*/
//Q5. What will be the value stored in the variable x after executing following statement: x = 3<0 && 5>0;
int main()
{
    int x = 3<0 && 5>0;
    printf("%d",x);
}