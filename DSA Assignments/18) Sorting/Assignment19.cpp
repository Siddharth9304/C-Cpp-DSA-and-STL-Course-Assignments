#include<iostream>
using namespace std;
int Quick(int left, int right, int arr[])
{
    int loc = left;
    while(left < right)
    {
        while(arr[loc]<=arr[right])
                right--;
        swap(arr[loc],arr[right]);
        loc = right;
        if(left!=right)
        {
            while(arr[left]<=arr[loc])
                left++;
            swap(arr[left],arr[loc]);
            loc = left;
        }
    }
    return loc;
}
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int getSmallValInd(int arr[], int size)
{
    int smallestVal = arr[0];
    int smallValInd = 0;
    for(int i=1; i<size; i++)
        if(smallestVal>arr[i])
        {
            smallestVal = arr[i];
            smallValInd = i;
        }
    return smallValInd;
}
void getSmallestValAtFirst(int arr[], int size)
{
    swap(arr[0], arr[getSmallValInd(arr,size)]);
}
void bubbleSort(int arr[], int size)
{
    for(int i=1; i<size; i++)
        for(int j=0; j<size-i; j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
}
void modifiedBubbleSort(int arr[], int size)
{
    int i,j,swapCount;
    for(i=1; i<size; i++)
    {
        for(j=0,swapCount=0; j<size-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapCount++;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapCount==0)
            break;
    }
}
void insertionSort(int arr[], int size)
{
    int i,j,temp;
    for(i=0; i<size-1; i++)
    {
        temp = arr[i+1];
        for(j=i; j>=0; j--)
            if(arr[j]>temp)
                arr[j+1] = arr[j];
            else
                break;
        arr[j+1] = temp;
    }
}
void selectionSort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
        getSmallestValAtFirst(arr+i,size-i);
}
void QuickSort(int arr[], int size)
{
    int temp;
    if(size>1)
    {
        temp = Quick(0,size-1, arr);
        QuickSort(arr,temp);
        QuickSort(arr+temp+1,size-temp-1);
    }
}


int main()
{
    int arr[] = {2,4,6,8,1,7,3};
    QuickSort(arr,7);
    for(int i=0; i<7; i++)
        cout << arr[i] << " ";
}