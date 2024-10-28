#include<stdio.h>
#include "C:\Users\prem\OneDrive\Desktop\C, C++, DSA and STL\Assignments\31) Arrays and Functions\Assignment31.c"

//Q1. Write a function to swap two elements of given array with specified indices.
void swap(int arr1[],int arr2[],int i)
{
    arr1[i] = arr1[i] + arr2[i];
    arr2[i] = arr1[i] - arr2[i];
    arr1[i] = arr1[i] - arr2[i];
}
//Q2. Write a function to count a total number of duplicate elmements in an array.(Means elements that occurs 2 times in an array)
int countDup(int arr[], int n)
{
    sortArr(arr,n);
    int i,j,count,no_dup=0;
    for(i=0; i<n-1; i=j)
    {
        for(j=i+1,count=0; j<n; j++)
            if(arr[i]==arr[j])
            {   
                if(count==0)
                    count++;
            }
            else
                break;
        if(count==1)
            no_dup++;
    }
    return no_dup;       
}
//Q3. Write a function to print all unique elements in an array.
void uniqueElements(int arr[], int n)
{
    sortArr(arr,n);
    int i,j;
    printf("{");
    for(i=0; i<n-1; i=j)
    {  
        for(j=i+1; j<n; j++)
            if(arr[i]!=arr[j])
                break;
        if(j==n)
            printf("%d}",arr[i]);
        else
            printf("%d, ",arr[i]);
    }
    if(i==n-1)
        printf("%d}",arr[i]);     
}
//Q4. Write a function to merge two arrays of the same size sorted in descending order.
void mergeArr(int arr1[], int arr2[], int n, int arr[])
{
    sortArrDesc(arr1,n);
    sortArrDesc(arr2,n);
    for(int i=0; i<2*n; i++)
        if(i<n)
            arr[i]=arr1[i];
        else
            arr[i]=arr2[i-n];
} 
//Q5. Write a function to count the frequency of each element of an array.
void countElement(int arr[], int n)
{
    sortArr(arr,n);
    int i,j,count;
    printf("{");
    for(i=0; i<n-1; i=j)
    {  
        for(j=i+1,count=1; j<n; j++)
        {
            if(arr[i]!=arr[j])
                break;
            else
                count++;
        }
        if(j==n)
            printf("(%d,%d)}",arr[i],count);
        else
            printf("(%d,%d),",arr[i],count);
    }
    if(i==n-1)
        printf("(%d,%d)}",arr[i],1);     
}
int main()
{
    int a[] = {1,2,2,3,4,3,4,3}, b[] = {7,6,10,9,8}, c[10];
    //swap(a,b,2);
    //printf("%d",countDup(a,10));
    //uniqueElements(a,13);
    //mergeArr(a,b,5,c);
    //displayArr(c,10);
    countElement(a,8);
    printf("\n");
    return 0;
}
   