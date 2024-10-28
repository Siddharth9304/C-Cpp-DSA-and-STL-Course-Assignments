#include<stdio.h>
void displayArr(int arr[], int n)
{
    printf("{");
    for(int i=0; i<n; i++)
        if(i==n-1)
            printf("%d}",arr[i]);
        else
            printf("%d,",arr[i]);
}
void sortArrDesc(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(arr[j]>arr[i])
            {
                arr[i] += arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] -= arr[j];
            }
}
//Q1. Write a function to find the greatest number from the given array of any size.(TSRS)
int maxArr(int arr[], int n)
{
    int max = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]>max)
            max = arr[i];
    return max;
}
//Q2. Write a function to find the smallest number from the given array of any size.(TSRS)
int minArr(int arr[], int n)
{
    int max = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]<max)
            max = arr[i];
    return max;
}
//Q3. Write a function to sort an array of any size.(TSRN)
void sortArr(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(arr[j]<arr[i])
            {
                arr[i] += arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] -= arr[j];
            }
}
//Q4. Write a function to rotate an array by n position in d direction.The d is an indicative value for left and right.
void rotateArr(int arr[], int l, int n, char d)
{
    if(d=='r' || d=='R')
        for( ; n; n--)
        {
            int temp = arr[l-1];
            for(int i=l-1; i>0; i--)
                arr[i] = arr[i-1];
            arr[0]=temp;    
        }
    else if(d=='l' || d=='L')
        for( ; n; n--)
        {
            int temp = arr[0];
            for(int i=0; i<l-1; i++)
                arr[i] = arr[i+1];
            arr[4]=temp;
        }
}
//Q5. Write a function to find the first occurance of adjacent duplicate values in the array. Function has to return the value of the element.
int adjDuplicate(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
        if(arr[i]==arr[i+1])
            return arr[i];
    return -1;
}




int mai()
{
    int a[] = {1,2,4,0,5};
   // int dup = adjDuplicate(a,6);
    /*int max = maxArr(a,5);
    int min = minArr(a,5);
    printf("%d\n",max);
    printf("%d\n",min); 
    sortArr(a,5);
    printf("\n%d",a[-1]);
    */
   //rotateArr(a,5,2,'L');
  // printf("%d",dup);
  sortArr(a,5);
   displayArr(a,5);


}