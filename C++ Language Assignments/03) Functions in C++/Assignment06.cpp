#include<iostream>
#include<string.h>
using namespace std;
inline void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

}
//Q1. Define a function to sort an array of integers in ascending or descending order depending on bool type argument(true for ascending and false for descending). Use default argument to implement it.
void sortArr(int arr[],int n, bool dir=true)
{
    if(dir){
        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
                if(arr[i]>arr[j])
                    swap(arr[i],arr[j]);
    }
    else{
        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
                if(arr[i]<arr[j])
                    swap(arr[i],arr[j]);
    }
}

//Q2. Define a function to sort an array of strings in ascending or descending order depending on bool type argument(true for ascending and false for descending). Use default argument to implement it.
void sortStrArr(char strArr[][10], int n, bool dir=true)
{
    if(dir){
        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
                if(strcmp(strArr[i],strArr[j])==1)
                {
                    char str[10];
                    strcpy(str,strArr[i]);
                    strcpy(strArr[i],strArr[j]);
                    strcpy(strArr[j],str);
                }
    }
    else{
        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
                if(strcmp(strArr[i],strArr[j])==-1)
                {
                    char str[10];
                    strcpy(str,strArr[i]);
                    strcpy(strArr[i],strArr[j]);
                    strcpy(strArr[j],str);
                }
    }
}
//Q.3 Define a function to rotate an array by n positions in the d direction. Implement position and direction using default arguments. Arguments d can be -1 or 1 denoting left or right direction. Argument n should be the lasst argument with default value 1.
void rotateArr(int arr[], int size, int d=1, int n=1)
{
    int temp,i;
    if (d==-1)
    {
        while(n--)
        {
            temp = arr[0];
            for(i=0; i<size-1; i++)
                arr[i] = arr[i+1];
            arr[i] = temp;
        }  
    }
    else
    {
        while(n--)
        {
            temp = arr[size-1];
            for(i=size-1; i>0; i--)
                arr[i] = arr[i-1];
            arr[i] = temp;
        }
    }
        
}

//Q4. Define a function to calculate LCM of three numbers.
int lcm(int a, int b, int c=1)
{
    int max = a>b?a>c?a:c:b>c?b:c;
    int lcm;
    for(lcm = max; lcm%a||lcm%b||lcm%c; lcm+=max);
    return lcm;
}

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	char S[6],T[6],M[6];
	while(t--)
	{
	    cin >> S >> T;
	    for(i=0; i<5; i++)
	        if(S[i] == T[i])
	            M[i] = 'G';
	        else 
	            M[i] = 'B';
        M[i] = 0;
	    cout << M << endl;
	}

}
