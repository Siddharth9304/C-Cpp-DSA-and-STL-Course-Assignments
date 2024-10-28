#include<stdio.h>

//Q1. Write a program to calculate the sum of numbers stored in an array of size 10.Take array values from the user.
void arrsum()
{
    int arr[10],sum=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<10; i++)
        sum += arr[i];
    printf("sum of all the numbers you entered = %d",sum);
}
//Q2. Write a program to calculate the average of numbers stored in an array of size 10.Take array values from the user.
void arravg()
{
    int arr[10],sum=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<10; i++)
        sum += arr[i];
    printf("the average of all the numbers you entered = %f",sum/10.0);
}
//Q3. Write a program to calculate the sum of all even numbers and sum of all odd numbers which are stored in an array of size 10.Take array values from the user.
void sumevenodd()
{
    int arr[10],sumeven=0,sumodd=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<10; i++)
        if(arr[i]%2)
            sumodd += arr[i];
        else
            sumeven += arr[i];
        
    printf("sum of all the even numbers in an array = %d\n",sumeven);
    printf("sum of all the odd numbers in an array = %d",sumodd);
}
//Q4. Write a program to find the greatest number stored in an array of size 10.Take array values from the user.
void greatestInarr()
{
    int arr[10],greatest,i;
    printf("Enter 10 numbers : ");
    for(i=0; i<10; i++)
        scanf("%d",&arr[i]);
    for(greatest=arr[0], i=1; i<10; i++)
        if(arr[i] > greatest)
            greatest = arr[i];
    printf("greatest number in the given array = %d",greatest);
}
//Q5. Write a program to find the smallest number stored in an array of size 10.Take array values from the user.
void smallestInarr()
{
    int arr[10],smallest,i;
    printf("Enter 10 numbers : ");
    for(i=0; i<10; i++)
        scanf("%d",&arr[i]);
    for(smallest=arr[0], i=1; i<10; i++)
        if(arr[i] < smallest)
            smallest = arr[i];
    printf("smallest number in the given array = %d",smallest);
}
int main()
{
    smallestInarr();
}