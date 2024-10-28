#include<Stdio.h>

//1st pattern
/*
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
            if(j<=i)
                printf("* ");
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}*/

//2nd pattern
/*
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
            if(j>=6-i)
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
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
            if(j<=6-i)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}*/

//4th pattern

int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
            if(j>=i)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}

//5th pattern
/*
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
            if(j<=i)
                printf("%d ",j);
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}*/

//6th pattern
/*
int main()
{
    int i,j,k;
    for(i=1; i<=4; i++)
    {
        k=i;
        for(j=1; j<=4; j++)
            if(j<=i)
                printf("%d ",k--);
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}*/

//7th pattern
/*
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
            if(j>=i)
                printf("%c ",'A'-i+j);
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}*/

//8th patttern
/*
int main()
{
    int i,j,count=1;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
            if(j<=i)
                printf("%d ", count++);
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}*/

//9th pattern
/*
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
            if(i==1 || i==5 || j==1 || j==5)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}
*/
