#include<stdio.h>
#include <string.h>

//Q1. Write a function to swap strings of two char arrays.
void swapStrings(char *str1, char *str2)/*
{
    int len,i;
    char temp;
    
    len = strlen(str1)>strlen(str2)?strlen(str1):strlen(str2);  
    for(i=0; i<=len; i++)
    {
        temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }
    
}*/
{
    int i,small_len;
    char temp,*small_string, *large_string;
    
    small_len = strlen(str1)<strlen(str2)?strlen(str1):strlen(str2);
    small_string = strlen(str1)<strlen(str2)?str1:str2;
    large_string = strlen(str1)>strlen(str2)?str1:str2;

    for(i=0; i<=small_len; i++)
    {
        temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }
    for(; large_string[i]; i++)
    {
        small_string[i] = large_string[i];
    }
    
    small_string[i] = 0; 
}

//Q2. Write a function to sort an array of int type values.
void sort(int *ptr, int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
        for(int j = i+1; j<size; j++)
            if(ptr[j]<ptr[i])
            {
                temp = ptr[i];  
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
}

//Q3. Write a function to merge two arrays in a given array.
void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
    int i;
    for(i=0; i<size1; i++)
        arr3[i] = arr1[i];
    for(i=0; i<size2; i++)
        arr3[size1 + i] = arr2[i];
}

//Q4. Write a function to move first value of an array to the position where all smaller values will be in the left and greater values will be in the right
void moveFirst(int *ptr, int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
        for(int j = i+1; j<size; j++)
            if(ptr[j]<ptr[i])
            {
                temp = ptr[i];  
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
}

//Q5. 

int highest_marks(int **p,int a,int b,int c,int d, int e)
{
    int highest_score=0;
    for(int i=0; i<a; i++)
        if(p[0][i]>highest_score)
            highest_score = p[0][i];
    for(int i=0; i<b; i++)
        if(p[1][i]>highest_score)
            highest_score = p[1][i];
    for(int i=0; i<c; i++)
        if(p[2][i]>highest_score)
            highest_score = p[2][i];
    for(int i=0; i<d; i++)
        if(p[3][i]>highest_score)
            highest_score = p[3][i];
    for(int i=0; i<e; i++)
        if(p[4][i]>highest_score)
            highest_score = p[4][i];

    return highest_score;
        
}

int high_marks(int **p, int no_sect, int *arr)    //this is more good soln
{
    int high_score=0;
    for(int i=0; i<no_sect; i++)
        for(int j=0; j<arr[i]; j++)
            if(p[i][j]>high_score)
                high_score = p[i][j];
    return high_score;
}

int main()
{
    int class10_A[10] = {87,57,70,85,79,40,80,91,69,78};
    int class10_B[13] = {45,67,88,70,67,45,95,78,54,46,34,78,90};
    int class10_C[15] = {43,64,85,76,47,45,45,68,54,45,36,73,50,96,95};
    int class10_D[10] = {45,67,88,45,48,56,76,54,38,30};
    int class10_E[14] = {45,47,58,75,97,45,93,73,54,67,37,77,93,69  };
    
    int no_students[5] = {10,13,15,10,14};

    int *ptr[5] = {class10_A,class10_B,class10_C,class10_D,class10_E};

    printf("%d",high_marks(ptr,3,no_students));

}