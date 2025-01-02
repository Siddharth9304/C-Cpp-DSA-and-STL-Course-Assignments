#include<iostream>
using namespace std;
#define INVALID_INPUT 0 

//1
void firstNnaturalNumbers(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    if(N>1)
        firstNnaturalNumbers(N-1);
    cout << N << endl;
}

//2
void firstNnaturalRev(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    cout << N << endl;
    if(N>1)
        firstNnaturalRev(N-1);
}

//3
void firstNodd(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    if(N>1)
        firstNodd(N-1);
    cout << 2*N-1 << endl;
}

//4
void firstNoddRev(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    cout << 2*N-1 << endl;
    if(N>1)
        firstNoddRev(N-1);
}

//5
void firstNeven(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    if(N>1)
        firstNeven(N-1);    
    cout << 2*N << endl;
}

//6
void firstNevenRev(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    cout << 2*N << endl;
    if(N>1)
        firstNevenRev(N-1);    
}

//7
void sqFirstNNumbers(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    if(N>1)
        sqFirstNNumbers(N-1);
    cout << N*N << endl;
}

//8
void sqFirstNNumbersRev(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    cout << N*N << endl;
    if(N>1)
        sqFirstNNumbersRev(N-1);
}

//9
void cubeFirstNNumbers(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    if(N>1)
        cubeFirstNNumbers(N-1);
    cout << N*N*N << endl;
}

//10
void cubeFirstNNumbersRev(int N)
{
    if(N<1)
        throw INVALID_INPUT;
    cout << N*N*N << endl;
    if(N>1)
        cubeFirstNNumbersRev(N-1);
}






int main()
{
    cubeFirstNNumbers(10);
}