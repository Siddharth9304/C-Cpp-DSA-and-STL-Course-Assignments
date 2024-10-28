#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Q1. Define a function to input variable length string and store it in an array without memory wastage. 
char* inputString()
{
   char c;
   int i,j;
   char *ptr = (char*)malloc(1);
   for(i=1; ; i++)
   {
        ptr = (char*)realloc(ptr,i);
        scanf("%c",&c);
        if(c=='\n')
            break;
        else    
            ptr[i-1] = c;
   }
   ptr[i-1] = 0;
   return ptr;
}

//Q2. 

void f2()
{
    int n,*ptr,sum=0;
    printf("Enter number of values for average : ");
    scanf("%d",&n);
    ptr = (int*)malloc(4*n);
    printf("Enter %d numbers : \n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&ptr[i]);
    for(int i=0; i<n; i++)
        sum += ptr[i];
    printf("Average is : %0.2f",(float)sum/n);
    free(ptr);
}

//Q3.
void f3()
{
    int n,*ptr,sum=0;
    printf("Enter number of values to sum : ");
    scanf("%d",&n);
    printf("Enter %d numbers : \n",n);
    for(int i=0; i<n; i++)
    {   ptr = (int*)malloc(4);
        scanf("%d",ptr);
        sum += *ptr;   
        free(ptr);
    } 
    printf("Sum is : %d",sum);
    free(ptr);
}

//Q4. 
int* mergeArr(int arr1[], int arr2[], int a, int b)
{
    int *ptr,i;
    ptr = (int*)calloc(a+b,4);
    for(i=0; i<a; i++)
        ptr[i] = arr1[i];
    for( ;i<a+b ;i++)
        ptr[i] = arr2[i-a];
    return ptr;
}

int main()
{
    char *s;
    s = inputString();
    printf("%s",s);

}