// printf and scanf

#include<stdio.h>
#include<stdlib.h>

//Q1. Write a Program to calculate average of three numbers.Numbers are given by the users.
/*
int main()
{
    float a,b,c,avg;
    printf("Enter three numbers to calculte their average : ");
    scanf("%f%f%f",&a,&b,&c);
    avg = (a + b + c)/3;
    printf("average of %f, %f and %f is %f",a,b,c,avg);

    return 0;
}*/

//Q2. WAP to find a circumference of a circle.
/*
int main()
{
    float r;
    printf("Enter radius of a circle : ");
    scanf("%f",&r);
    printf("Circumference of a circle of radius %f is %f", r, 3.14f * r * r);
    
    return 0;
}*/

//Q3. WAP to calculate simple interest.
/*
int main()
{
    int P,R,T;
    float SI;
    
    printf("Enter Principal amount in rupees : ");
    scanf("%d",&P);
    printf("Enter Rate of Interest in %c per annum : ",'%');
    scanf("%d",&R);
    printf("Enter Time i.e, number of years : ");
    scanf("%d",&T);

    SI = (P * R * T)/100.0;

    printf("Simple interest is %f rupees", SI);

    return 0;
}*/

//Q4. Write a Program to calculate volume of a cuboid
/*
int main()
{
    float l,b,h,vol;

    printf("Enter length, breadth and height of a cuboid respectively : ");
    scanf("%f%f%f",&l,&b,&h);
    vol = l * b * h;
    printf("Volume of a cuboid of given dimensions is %f", vol);

    return 0;
}*/

//Q5. Write a Program to ask user about the cost price and selling price of banana per dozen.Calculate the profit and loss earned upon selling 25 bananas.
int main()
{
    float CP,SP;
    printf("Enter cost price of bananas per dozen : ");
    scanf("%f",&CP);
    printf("Enter selling price of bananas per dozen : ");
    scanf("%f",&SP);
    printf("profit or loss upon selling 25 bananas is %f \n", (SP - CP) * 25.0f/12);
    printf("Note: psitive value means profit and negative value means loss.");
    return 0;
}
