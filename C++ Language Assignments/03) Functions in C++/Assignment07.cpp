#include<iostream>
#include<string.h>
using namespace std;
//Q1. Define a function to calculate HCF of two numbers.
int hcf(int x, int y)
{
    int hcf; 
    for(hcf = x<y?x:y; x%hcf || y%hcf; hcf--);
    return hcf;
}

//Q2. Define overloaded functions to calculate volume of cuboid, cone and sphere.
float volume(float l, float b, float h)
{
    return l*b*h;
}
float volume(float r, float h)
{
    return 3.14/3 * r * r * h; 
}
float volume(float r)
{
    return 4/3.0 * 3.14 * r * r * r;
}

//Q3. Define a function to print a substring from startindex(inclusive) to endindex(exclusive).Define a function in such a way that if second argument is not proveided string will print till the last possible index.
void printSubstring(string str, int start, int end=-1)
{
    if(end==-1)
        for(int i=start; str[i]; i++)
            cout << str[i];
    else
        for(int i=start; i<end && str[i] ; i++)
            cout << str[i];
}

int main()
{
    printSubstring("premsiddhartha",2);
}