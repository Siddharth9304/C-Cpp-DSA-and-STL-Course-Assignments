#include<stdio.h>

//Q1. Write a program to find the Nth term of the Fibonacci series.
/*
int main()
{
    int n;
    printf("Enter value for 'n' to find the nth term of the Fibonacci series : ");
    scanf("%d",&n);
    int secondlast = 0, firstlast = 1;
    if(n==1)
        printf("%d",secondlast);
    else if(n == 2)
        printf("%d",firstlast);
    else if(n > 2)
        {
            int ans;
            for(int i = 3; i<=n; i++)
            {
                ans = secondlast + firstlast;
                secondlast = firstlast;
                firstlast = ans;
            }
            printf("%d",ans);
        }
    else
        printf("you entered a wrong value for n.");
    return 0;
}*/

//Q2. Write a program to print first N terms of the Fibonacci series.
/*
int main()
{
    int n;
    printf("Enter value for 'n' to find the nth term of the Fibonacci series : ");
    scanf("%d",&n);
    int secondlast = 0, firstlast = 1;
    if(n==1)
        printf("%d",secondlast);
    else if(n == 2)
        printf("%d",firstlast);
    else if(n > 2)
        {
            int ans;
            for(int i = 3; i<=n; i++)
            {
                ans = firstlast + secondlast;
                printf("%d\n",ans);
                secondlast = firstlast;
                firstlast = ans;
            }
        }
    else
        printf("you entered a wrong value for n.");
    return 0;
}*/

//Q3. Write a program to check whether a given number is there in a fibonacci series or not.
/*
int main()
{
    int n;
    printf("Enter value for 'n' to find the nth term of the Fibonacci series : ");
    scanf("%d",&n);
    int secondlast = 0, firstlast = 1;
    if(n == secondlast)
        printf("Yes");
    else if(n == firstlast)
        printf("Yes");
    else
        {
            int ans;
            while(n>firstlast)
            {
                ans = firstlast + secondlast;
                if(n == ans)
                    {
                        printf("Yes");
                        return 0;
                    }
                secondlast = firstlast;
                firstlast = ans;
            }
            printf("No");
        }
    return 0;
}*/

//Q. Write a program to add numbers entered by user. User can enter any numbers of number until he enters 0.
/*
int main()
{
    int n;
    int sum = 0;
    printf("you can add any numbers of number just enter 0 as a final number;\n");
    do
    {
        printf("Enter number : ");
        scanf("%d",&n);
        sum += n;
    }while(n);
    printf("sum of given numbers = %d",sum);
}
*/

//Q4. Write a program to check whether a given number is an armstrong number or not.
/*
int main()
{
    int n,copy,ld;
    int sum = 0;
    printf("Enter number to check whether it is armstrong number or not : ");
    scanf("%d",&n);
    copy = n;
    while(n > 0)
    {
        ld = n%10;
        sum += ld*ld*ld;
        n /= 10;
    }
    if(sum == copy)
        printf("Given number is an armstrong number");
    else
        printf("Given number is not an armstrong number");
    return 0;
}*/

//Q5. Write a program to print all armstrong numbers under 1000.
int main()
{
    int n,copy,ld,sum;
    for(n=0; n<=1000; n++)
    {   
        sum = 0;
        copy = n;
        while(copy)
        {
            ld = copy%10;
            sum += ld*ld*ld;
            copy /= 10;
        }
        if(sum == n)
            printf("%d\n",n);
    }
    return 0;
}
