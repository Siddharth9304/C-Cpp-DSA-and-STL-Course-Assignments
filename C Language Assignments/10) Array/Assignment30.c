#include<stdio.h>
//funtion to fill values in an array.
void fillArr(int arr[],int n)
{
    printf("Enter %d numbers : ",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
}
//function to display value of an array.
void displayArr(int arr[],int n)
{
    printf("{");
    for(int i=0; i<n; i++)
        {
            if(i==n-1)
                printf("%d}",arr[i]);
            else
                printf("%d, ",arr[i]);
        }
}
//Q1.Write a progrm to sort elements of an array of size 10.Take array values from the user.
void sortArr(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]>arr[j])
            {
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
            }
} 
//Q2.Write a program to find second largest in an array.Take array values from the user.
int secondHigh(int arr[],int n)
{
    for(int i=0; i<2; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]<arr[j])
            {
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
            }
    return arr[1];
}
//Q3.Write a program to find second smallest in an array.Take array values from the user.
int secondSmall(int arr[],int n)
{
    for(int i=0; i<2; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]>arr[j])
            {
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
            }
    return arr[1];
} 
//Q4. Write a progrm to sort elements of an array of size 10 in descending order.Take array values from the user.
void sortArrdesc(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]<arr[j])
            {
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
            }
}
//Q5. Write a program to copy the elements of one array into another array.Take array values from the user.
void copyArr(int arr1[],int m,int arr2[],int n)
{
    for(int i=0; i<n; i++)
        arr1[i] = arr2[i];
}

int main()
{
    int a[11],b[10],sum =0;
    fillArr(a,11);
    sortArrdesc(a,11);
    return 0;
} 