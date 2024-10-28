#include<stdio.h>
#include<string.h>
void sortStr(char arr[])
{
    int len = strlen(arr);
    for(int i=0; i<len-1; i++)
        for(int j=i+1; j<len; j++)
            if(arr[j]<arr[i])
            {
                arr[i] += arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] -= arr[j];
            }
}
char maxFreqChar(char str[])
{
    int len = strlen(str);
    int i,j,count,max=0;
    char c;
    sortStr(str);
    for(i=0; i<len; i=j)
    {
        count=1;
        for(j=i+1; str[i]==str[j]; j++)
            count++;
        if(count>max)
        {
            max = count;
            c = str[i];
        }
    }
    return c;

}
//Q1. Write a program to find words ending with a letter 's' and store each word in a 2d char array.
int storeSwords(char swords[][20], char str[])
{
    int i,j,no_words;
    char word[20];

    for(i=0,j=0,no_words=0; str[i]; i++)
        if(str[i] != ' ' && str[i] != '.')
            word[j++] = str[i];
        else if(str[i-1] != ' ' && str[i-1] != '.')
        {
            word[j] = 0;
            if(word[j-1] == 's' || word[j-1] == 'S' )
                strcpy(swords[no_words++],word);
            j = 0;
        } 
    if(str[i-1] != ' ' && str[i-1] != '.'){ 
        word[j] = 0;
        if(word[j-1] == 's' || word[j-1] == 'S')
            strcpy(swords[no_words++],word);
    }
    return no_words;
}

//Q2. Write a function to return the most repeating character in a list of strings.

char mostRepChar(char strArr[][100], int n)
{
    char str[10000] = "\0";

    for(int i=0; i<n; i++)
        strcat(str,strArr[i]);
    
    return maxFreqChar(str);
}

//Q3. Write a function to check whether a pair of strings are anagram or not. Both the strings are stored in a 2d char array.
int isAnagram(char strArr[][100])
{
    char str1[100],str2[100];
    strcpy(str1,strArr[0]);
    strcpy(str2,strArr[1]);
    sortStr(str1);
    sortStr(str2);

    return !strcmp(str1,str2);
}

//Q4. Write a funtion to store all the words in a given string which are starting from 'a' , in a two dimensional char array.

int storeAwords(char awords[][20], char str[])
{
    int i,j,no_words;
    char word[20];

    for(i=0,j=0,no_words=0; str[i]; i++)
        if(str[i] != ' ' && str[i] != '.')
            word[j++] = str[i];
        else if(str[i-1] != ' ' && str[i-1] != '.')
        {
            word[j] = 0;
            if(word[0] == 'a' || word[0] == 'A' )
                strcpy(awords[no_words++],word);
            j = 0;
        } 
    if(str[i-1] != ' ' && str[i-1] != '.'){ 
        word[j] = 0;
        if(word[0] == 'a' || word[0] == 'A')
            strcpy(awords[no_words++],word);
    }
    return no_words;
}

//Q5. A 2d array is filled with 10 email ids. Write a function to find how many of them belongs to gmail.com.
int no_gmailIds(char emails[][50])
{
    int no_gmail = 0, gIndex;
    for(int i=0; i<10; i++)
    {
        gIndex = strlen(emails[i]) - 9;
        if(!strcmp(&emails[i][gIndex],"gmail.com"))
            no_gmail++;
    }
    return no_gmail;

}

int main()
{
    
   /*Q1 char str[] = "My name is YAS sharma.yours words good was bad";
    char swords[10][20];
    int no_words = storeSwords(swords, str);
    for(int i=0; i<no_words; i++)
        printf("%s ",swords[i]);*/

   /*Q2 char strArr[][100] = {"prem","piyush","pushkar is great aapdsaa","prachi","pocket"};
    printf("%c",mostRepChar(strArr,5));
    printf("%d",!-1);*/

    /*Q3. char strArr[2][100] =  {"prem siddhartha", "siddhartha prem"};
    printf("%d",isAnagram(strArr));*/
   
   /*Q4 char str[] = "My name is Aditya sharma.I was a bad boy but after sometime I became good a good boy";
    char awords[10][20];
    int no_words = storeAwords(awords, str);
    for(int i=0; i<no_words; i++)
        printf("%s ",awords[i]);*/

    char emails[10][50] = {"siddharthprem921@gmhail.com","premsiddharth14@gmail.com","tanyasidharht@youtube.com","premsidd@yahoo.com","sidd@hotmail.com","premsiddcoding@gmail.com","premsiddharth@hotmail.com","suresdhd10@gmail.com","himanshi@gmail.com","devsudd@hotmail.com"};
    printf("%d",no_gmailIds(emails));
}