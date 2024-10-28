#include<iostream>

using namespace std;

//Q1. Write a program to calculate an average of three numbers.
int main1()
{
    int a,b,c;
    float avg;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    avg = (a+b+c)/3.0;
    cout << "average of " << a << ", " << b << " and " << c << " is " << avg;
    return 0;
}

//Q2. Write a program to calculate square of a number.
int main2()
{
    int n,square;
    cout << "Enter a number : ";
    cin >> n;
    square = n*n;
    cout << "square of " << n << " is " << square;
    return 0;
}

//Q3. Write a program to swap values of two int variables without using third variable.
int main3()
{
    int a = 5;
    int b = 9;
    cout << a << " " << b << endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout << a << " " << b;
}

//Q4. Write a program to find the maximum of two numbers.
int main4()
{
    int a, b;
    int max;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    max = a>b?a:b;
    cout << "maximum of " << a << " and " << b << " is " << max;
    return 0; 
}

//Q5. Write a program to add all the numbers of an array of size 10.
int main()
{
    int arr[10] = {2,4,6,8,10,12,14,16,18,20};
    int sum = 0;
    for(int i=0; i<10; i++)
        sum += arr[i];
    cout << "sum of all the numbers of an array = " << sum;
    return 0;
}