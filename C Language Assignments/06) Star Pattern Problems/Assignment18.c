#include<stdio.h>

//1st pattern

int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=7; j++)
            if(j>=5-i && j<=3+i)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}

//pattern 2
/*
int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=7; j++)
            if(j>=i && j<=8-i)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}*/

//3rd pattern
/*
int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=7; j++)
            if(j>=5-i && j<=3+i && (i+j)%2)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}
*/
//4th pattern
/*
int main()
{
    for(int i=1; i<=4; i++)
    {
        int x=1;
        for(int j=1; j<=7; j++)
            if(j>=5-i && j<=3+i)
                printf("%d ", j<=4?++x:--x);
            else
                printf("  ");
        printf("\n");
    }
    return 0; 
}*/

//5th pattern
/*
int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=7; j++)
            if(j>=i && j<=8-i)
                printf("%c ", 'A'-i+j);
            else
                printf("  ");
        printf("\n");
    }
    return 0; 
}*/

//6th pattern
/*
int main()
{
    for(int i=1; i<=4; i++)
    {
        char x=64;
        for(int j=1; j<=7; j++)
            if(j>=i && j<=8-i)
                printf("%c ", j<=4?++x:--x);
            else
                printf("  ");
        printf("\n");
    }
    return 0; 
}*/

//pattern 7
/*
int main()
{
    int y=0; 
    for(int i=1; i<=5; i++)
    {
        int x=0;
        for(int j=1; j<=9; j++)
            if(j>=6-i && j<=4+i && (i+j)%2==0)
                printf("%d ", j<5 ? ++x : j==5?++y:x--);
            else
                printf("  ");
        printf("\n");
    }
    return 0; 
}*/

//PATTERN 8
/*
int main()
{
    for(int i=1; i<=4; i++)
    {
        int x=0;
        for(int j=1; j<=7; j++)
            if(j<=5-i || j>=3+i)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    return 0; 
}
*/
//Pattern 9
/*
int main()
{
    for(int i=1; i<=4; i++)
    {
        int x=0;
        for(int j=1; j<=7; j++)
        {
            j<=4?++x:--x;
            if(j<=5-i || j>=3+i)
                printf("%d ", x);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0; 
}*/

//Pattern 10
/*
int main()
{
    for(int i=1; i<=4; i++)
    {
        char x=64;
        for(int j=1; j<=7; j++)
        {
            j<=4?++x:--x;
            if(j<=5-i || j>=3+i)
                printf("%c ", x);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0; 
}*/