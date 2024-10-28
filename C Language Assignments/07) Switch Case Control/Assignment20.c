#include<Stdio.h>

//Q1.
/*
int main()
{
    int marks,g;
    printf("Enter marks : ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
        g = 11;
    else
        g = marks/10;
    switch(g)
    {
        case 10:
            printf("A");
            break;
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
            printf("E");
            break;
        default:
            printf("F");
            break;
        case 11:
            printf("invalid marks");
    }
}*/
int main()
{
    int marks,g;
    printf("Enter marks : ");
    scanf("%d",&marks);
    switch(marks)
    {
        case 90 ... 100:
            printf("Grade A");
    }

}
//Q2.
/*
int main()
{
    int n;
    while(1)
    {
        int a,fact,sum;
        float r;
        printf("\nChoose one option from the following : \n\n");
        printf("1. Factorial of a number.\n2. Check even and odd.\n3.Area of circle.\n4. Sum of first n natural numbers.\n5. Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&n);
        printf("\n");
        switch(n)
        {
            case 1:
                fact = 1;
                printf("Enter number : ");
                scanf("%d",&a);
                if(a>=0)
                {
                    for(int i=2; i<=a; i++)
                        fact *= i;
                    printf("%d! = %d\n",a,fact);
                }
                else
                    printf("not defined\n");
                break;
            case 2:
                printf("Enter number to check : ");
                scanf("%d",&a);
                if(a>=0)
                    if(a%2)
                        printf("odd\n");
                    else
                        printf("even\n");
                else
                    printf("invalid number\n");
                break;
            case 3:
                printf("Enter Radius of a circle in metre : ");
                scanf("%f",&r);
                if(r>=0)
                    printf("area of circle of radius %f = %f sq.m\n",r,3.14*r*r);
                else
                    printf("area of circle of radius %f = %f sq.m\n",-1*r,3.14*r*r);
                break;
            case 4:
                sum = 0;
                printf("Enter number : ");
                scanf("%d",&a);
                if(a>=0)
                {
                for(int i=1; i<=a;i++)
                    sum += i;
                printf("sum of first %d natural numbers = %d\n",a,sum);
                }
                else
                    printf("invalid number\n");
                break;
            case 5:
                return 0;
            default:
                printf("invalid option\n");        
    }
    }
}*/

//Q3.
/*
int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    switch(c)
    {
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H': case 'I': case 'J': case 'K': case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z': 
        printf("uppercase character");
        break;
        case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g': case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n': case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u': case 'v': case 'w': case 'x': case 'y': case 'z': 
        printf("lowercase character");
        break;
        default:
        printf("some other character");
    }
}*/

//Q4.
/*
int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    switch(c)
    {
        case 'A': case 'a': case 'E': case 'e': case 'I': case 'i': case 'O': case 'o': case 'U': case 'u':
            printf("Vowel");
            break;
        case 'B': case 'C': case 'D': case 'F': case 'G': case 'H': case 'J': case 'K': case 'L': case 'M': case 'N': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'V': case 'W': case 'X': case 'Y': case 'Z':
        case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k': case 'l': case 'm': case 'n': case 'p': case 'q': case 'r': case 's': case 't': case 'v': case 'w': case 'x': case 'y': case 'z': 
            printf("Consonant");
            break;
        default:
            printf("Some other character");
    }
}*/
//Q5.
/*
int main()
{
    int n;
    do
    {
        int a,b,c,ans;
        printf("\nChoose one option from the following:\n\n");
        printf("1. Calculate LCM of two numbwes.\n2. Calculate sum of the digits of a number.\n3. Volume of a cuboid.\n4. Check whether a given number is prime or not.\n5. Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&n);
        printf("\n");
        switch(n)
        {
            case 1:
                printf("Enter two numbers : ");
                scanf("%d%d",&a,&b);
                if(a>0 && b>0)
                {
                    for(ans = a>b?a:b; ans%a||ans%b; ans++ );
                    printf("lcm of %d and %d = %d\n",a,b,ans);
                }
                else
                    printf("invalid numbers\n");
                    break;
           case 2:
                ans = 0;
                printf("Enter number : ");
                scanf("%d",&a);
                if(a>=0)
                {
                    while(a>0)
                    {
                        ans += a%10;
                        a /= 10;
                    }
                    printf("sum of digits of a given number = %d\n",ans);
                }
                else
                    printf("invalid number, number should be non-negative\n");
                    break;
            case 3:
                printf("Enter length, breadth and height of a cuboid respectively : ");
                scanf("%d%d%d",&a,&b,&c);
                ans = a*b*c>0?a*b*c:-1*a*b*c;
                printf("Volume of cuboid = %d\n",ans);
                break;
            case 4:
                printf("Enter number to check : ");
                scanf("%d",&a);
                if(a<=1)
                    printf("Not a prime number\n");
                else
                {
                    for(b=2; b<a; b++)
                    if(a%b==0)
                    {  
                        printf("Given number is not a prime number\n");
                        break;
                    }
                    if(b==a)
                        printf("Given number is a prime number\n");
                }
                break;
            case 5:
                break;
            default:
                printf("invalid option\n");
        }           
    }while(n!=5);
    return 0;
}
*/
