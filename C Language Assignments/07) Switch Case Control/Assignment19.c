#include<stdio.h>

//Q1. Write a program which takes a month number as an input and display number of days in that month.
/*
int main()
{
    int n;
    printf("Enter month number : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("31 days");
            break;
        case 2:
            printf("28 days or 29 days");
            break;
        case 3:
            printf("31 days");
            break;
        case 4:
            printf("30 days");
            break;
        case 5:
            printf("31 days");
            break;
        case 6:
            printf("30 days");
            break;
        case 7:
            printf("31 days");
            break;
        case 8:
            printf("31 days");
            break;
        case 9:
            printf("30 days");
            break;
        case 10:
            printf("31 days");
            break;
        case 11:
            printf("30 days");
            break;
        case 12:
            printf("31 days");
            break;
        default :
            printf("invalid day number");
            break;
    }
    return 0;
}
*/
/*Q2. Write a menu driven program using following optionS:
      1. Addition
      2. Subtraction
      3. Multiplication
      4. Division
      5. Exit
*/

int main()
{
    int n;
    float x,y;
    while(1)
    {   
        printf("Choose which operation do you want to perform on two numbers: \n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Choose option : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                    printf("Enter two numbers : ");
                    scanf("%f%f",&x,&y);
                    printf("=%0.2f\n",x+y);
                    break;
                case 2:
                    printf("Enter two numbers : ");
                    scanf("%f%f",&x,&y);
                    printf("=%0.2f\n",x-y);
                    break;
                case 3:
                    printf("Enter two numbers : ");
                    scanf("%f%f",&x,&y);
                    printf("=%0.2f\n",x*y);
                    break;
                case 4:
                    printf("Enter two numbers : ");
                    scanf("%f%f",&x,&y);
                    printf("=%0.2f\n",x/y);
                    break;
                case 5:
                    return 0;
                default:
                    printf("invalid option\n");
                    break;
        }       
    }

    return 0;
    
}

//Q3. Write a program which takes the day number of a week and display unique greeting message for the day.
/*
int main()
{
    int n;
    printf("Enter day number of a week : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("May your day be filled with joy and laughter. Have a great day!");
            break;
        case 2:
            printf("Wishing you a sunshine-filled day ahead. Have a great day!");
            break;
        case 3:
            printf("Sending you positive vibes to brighten up your day. Have a great one!");
            break;
        case 4:
            printf("Get ready to conquer the day with a smile on your face. Have a great day!");
            break;
        case 5:
            printf("May your day be as beautiful as your smile. Have a great day ahead!");
            break;
        case 6:
            printf("Your smile can brighten up anyone's day. Have an amazing one!");
            break;
        case 7:
            printf("Embrace the day with open arms and make it extraordinary. Have a fantastic day!");
            break;
        default:
            printf("you entered the wrong day number");
            break;
    }
    return 0;
}*/
/*
Q4. Write a menu driven program with the following options:
1. Check whether a given set of three numbers are lengths of an isosceles triangle or not
2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
3. Check whether a given set of three numbers are equilateral triangle or not
4. Exit
*/
/*
int main()
{
    int n,a,b,c;
    while(1);
    {
        printf("Choose one option from the following:\n\n");
        printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
        printf("3. Check whether a given set of three numbers are equilateral triangle or not\n");
        printf("4. Exit\n\n");
        printf("Enter option : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("\nEnter sides of a triange : ");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && a+c>b && b+c>a)
                    if(a==b || a==c || b==c)
                        printf("Yes given sides are the sides of an isosceles triangle\n");
                    else
                        printf("No given sides are not the sides of an isosceles triangle\n");
                else
                    printf("invalid side of a triangle");
                break;
            case 2:
                printf("\nEnter sides of a triange : ");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && a+c>b && b+c>a)
                    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
                        printf("Yes given sides are the sides of a right angled triangle\n");
                    else
                        printf("No given sides are not the sides of a right angled triangle\n");
                else
                    printf("invalid side of a triangle");
                break;
            case 3:
                printf("\nEnter sides of a triange : ");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && a+c>b && b+c>a)
                    if(a==b && a==c && b==c)
                        printf("Yes given sides are the sides of an equilateral triangle\n");
                    else
                        printf("No given sides are not the sides of an equilateral triangle\n");
                else
                    printf("invalid side of a triangle");
                break;
            case 4:
                return 0;
            default:
                printf("\ninvalid option\n");
        }
        printf("\n");
    }

    return 0;
}*/
/*bekaar tareeka
int main()
{
    int n,a,b,c;
    do
    {
        printf("Choose one option from the following:\n\n");
        printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
        printf("3. Check whether a given set of three numbers are equilateral triangle or not\n");
        printf("4. Exit\n\n");
        printf("Enter option : ");
        scanf("%d",&n);
        if(n==1 || n==2 || n==3 || n==4 && n!=4)
            switch(n)
            {
                case 1:
                    printf("\nEnter sides of a triange : ");
                    scanf("%d%d%d",&a,&b,&c);
                    if(a==b || a==c || b==c)
                        printf("Yes given sides are the sides of an isosceles triangle\n");
                    else
                        printf("No given sides are not the sides of an isosceles triangle\n");
                    break;
                case 2:
                    printf("\nEnter sides of a triange : ");
                    scanf("%d%d%d",&a,&b,&c);
                    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
                        printf("Yes given sides are the sides of a right angled triangle\n");
                    else
                        printf("No given sides are not the sides of a right angled triangle\n");
                    break;
                case 3:
                    printf("\nEnter sides of a triange : ");
                    scanf("%d%d%d",&a,&b,&c);
                    if(a==b && a==c && b==c)
                        printf("Yes given sides are the sides of an equilateral triangle\n");
                    else
                        printf("No given sides are not the sides of an equilateral triangle\n");
                    break;
                case 4:
                    break;
                default:
                    printf("\ninvalid option\n");
            }
        else if(n!=4)
            printf("\ninvalid option\n");
        printf("\n");
    }while(n!=4);

    return 0;
}*/

//Q5.
/*
int main()
{
    int var;
    printf("Enter score out of 3 : ");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
            printf("good");
            break;
        case 2:
            printf("better");
            break;
        case 3:
            printf("best");
            break;
        default:
            printf("invalid");
    }
    return 0;
}*/
