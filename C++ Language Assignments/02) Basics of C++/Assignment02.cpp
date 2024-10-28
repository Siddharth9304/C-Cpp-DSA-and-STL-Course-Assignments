#include<iostream>

//Q1. Write a C++ program to print Hello MySirG on the screen.
int main1()
{
    std::cout<<"Hello MySirG";
    return 0;
}

//Q2. Write a program to print Hello on the first line and MySirG on the second line using endl.
int main2()
{
    std::cout<<"Hello"<<std::endl<<"MySirG";
    return 0;
}

//Q3. Write a program to calculate the sum of two numbers.
int main3()
{
    int a=10, b=20;
    std::cout<<"sum of "<< a <<" and "<< b << " is " << a+b;
    return 0;
}

//Q4. Write a program to calculate area of a circle.
int main4()
{
    int r = 7;
    float area = 3.14*r*r;
    std::cout<<"area of a circle of radius "<< r << " is " << area;
    return 0;
}

//Q5. Write a program to calculate volume of a cuboid.
int main()
{
    int l,b,h;
    l=5, b=4, h=10;
    int volume = l*b*h;
    std::cout<<"volume of a cuboid of dimensions " << l << ", "<< b << " and " << h << " is " << volume << " sq.units"; 
    return 0; 
}
