#include<stdio.h>
#include "C:\Users\prem\OneDrive\Desktop\C, C++, DSA and STL\C Laguage\Assignments\31) Arrays and Functions\Assignment31.c"
void copyArr(int arr1[],int m,int arr2[],int n)
{
    for(int i=0; i<n; i++)
        arr1[i] = arr2[i];
}
//Q1. Write a program to calculate the sum of two matrices each of order 3x3.
int main1()
{
    int mat1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int sumMat[3][3];
    //to sum two square matrices of order 3
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            sumMat[i][j] = mat1[i][j]+mat2[i][j];
    //to print 3x3 Matrix
    printf("{");
    for(int i=0; i<3; i++)
    {   
        printf("{");
        for(int j=0; j<3; j++)
            if(j!=2)
                printf("%d,",sumMat[i][j]);
            else if(i!=2)
                printf("%d},",sumMat[i][j]);
            else
                printf("%d}",sumMat[i][j]);
    }
    printf("}");
}

//Q2. Write a program to calculate product of two matrices each of order 3x3.
int main2()
{
    int sum;
    int mat1[3][3] = {{1,2,3},{4,6,6},{7,8,9}};
    int mat2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int prodMat[3][3];
    //to product two matrices of order 3x3
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
        {
            sum=0;
            for(int k=0; k<3; k++)
                sum += mat1[i][k]*mat2[k][j]; 
            prodMat[i][j] = sum;
        }
    //to print 3x3 Matrix
    /*printf("{");
    for(int i=0; i<3; i++)
    {   
        printf("{");
        for(int j=0; j<3; j++)
            if(j!=2)
                printf("%d,", prodMat[i][j]);
            else if(i!=2)
                printf("%d},",prodMat[i][j]);
            else
                printf("%d}",prodMat[i][j]);
    }
    printf("}");*/
    for(int i=0; i<3; i++)
    {   
        for(int j=0; j<3; j++)
            printf("%d  ",prodMat[i][j]);
        printf("\n");
    }
}

//Q3. Write a program to print the transpose of a given matrix.
int main3()
{
    int mat[3][2] = {{1,2},{3,4},{5,6}};
    int r,c;
    r=3;
    c=2;
    for(int i=0; i<c; i++)
    {
         for(int j=0; j<r; j++)
            printf("%d ",mat[j][i]);
        printf("\n");
    }
}


//Q5. Define a function to update score_board after each match result.
void updSb(int pl1, int pl2, char res, int sb[][4])
{
    if(res=='w' || res=='W')
    {   
        sb[pl1][pl2] = 2;
        sb[pl2][pl1] = 0;
    }
    else if(res=='l' || res=='L')
    {
        sb[pl1][pl2] = 0;
        sb[pl2][pl1] = 2;
    }
    else if(res=='d' || res=='D')
    {
        sb[pl1][pl2] = 1;
        sb[pl2][pl1] = 1;
    }
}

//Q6. Define a function to display scoreboard.
void disp_scoreboard(int sb[][4])
{
    for(int i=0; i<4; i++)
    {   
        for(int j=0; j<4; j++)
            if(i!=j)
                printf("%d ",sb[i][j]);
            else
                printf("- ");
        printf("\n");
    }
}

//Q7. Define a function which returns the score of a specific player.
int score_Pl(int pl_no, int sb[][4])
{
    int score=0;
    for(int j=0; j<4; j++)
        if(pl_no!=j)
            score += sb[pl_no][j];
    return score;
}

//Q8. Define a function to find the winner of the tournament.
int winner(int sb[][4])
{
    int scores[4] = {score_Pl(0,sb),score_Pl(1,sb),score_Pl(2,sb),score_Pl(3,sb)};
    int winner_score = scores[0];
    for(int i=1; i<4; i++)
        if(scores[i]>winner_score)
            winner_score = scores[i];
    for(int i=0; i<4; i++)
        if(scores[i]==winner_score)
            return i;
}

//Q9. Define a function to display rank of the players. 
void rankPlayers(int sb[][4])
{
    int scores[4] = {score_Pl(0,sb),score_Pl(1,sb),score_Pl(2,sb),score_Pl(3,sb)};
    int copyscores[4],rank=1;                    //to contain scores of players in descending order.
    copyArr(copyscores,4,scores,4);

    sortArrDesc(copyscores,4);
    for(int i=0; i<4; i++)
    {
        if(copyscores[i]!=copyscores[i+1] || i==3)
        {   
            for(int j=0; j<4; j++)
                if(copyscores[i]==scores[j])   
                    printf("%d rank - player no. %d (%d)\n",rank,j,scores[j]);
            rank++;
        }
    }
}

//Q.10
void runTournament(int score_board[][4])
{
    char res,temp;
    printf("Enter result of 'pl0 v/s pl1 : ");
    scanf("%c",&res);
    scanf("%c",&temp);
    updSb(0,1,res,score_board);
    printf("Enter result of 'pl0 v/s pl2 : ");
    scanf("%c",&res);
    scanf("%c",&temp);
    updSb(0,2,res,score_board);
    printf("Enter result of 'pl0 v/s pl3 : ");
    scanf("%c",&res);
    scanf("%c",&temp);
    updSb(0,3,res,score_board);
    printf("Enter result of 'pl1 v/s pl2 : ");
    scanf("%c",&res);
    scanf("%c",&temp);
    updSb(1,2,res,score_board);
    printf("Enter result of 'pl1 v/s pl3 : ");
    scanf("%c",&res);
    scanf("%c",&temp);
    updSb(1,3,res,score_board);
    printf("Enter result of 'pl2 v/s pl3 : ");
    scanf("%c",&res);
    scanf("%c",&temp);
    updSb(2,3,res,score_board);
}


int main()
{
    int score_board[4][4];   //Q.4
    runTournament(score_board);
    printf("\n");
    disp_scoreboard(score_board);
    printf("\n");
    rankPlayers(score_board);
    printf("\n");
    printf("winner of the game - player no.%d\n",winner(score_board));
    printf("\n");
    for(int i=0; i<4; i++)
        printf("player no.%d score = %d\n",i, score_Pl(i,score_board));
}


   