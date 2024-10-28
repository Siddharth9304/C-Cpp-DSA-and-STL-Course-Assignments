#include<stdio.h>
#include<string.h>

int countVowels(char str[])
{
    int count=0;
    for(int i=0; str[i]; i++)
        switch(str[i])
        {
            case 'a':case 'e':case 'i':case 'o':case 'u':
            case 'A':case 'E':case 'I':case 'O':case 'U':
            count++;
        }
    return count;
}
void lower(char str[])
{
    for(int i=0; str[i]; i++)
        if(str[i]>=65 && str[i]<=90)
            str[i] = str[i]+32;
} 
int cmpStrCIn(char str1[], char str2[])
{
    char str1copy[30], str2copy[30];
    strcpy(str1copy,str1);strcpy(str2copy,str2);
    lower(str1copy);
    lower(str2copy);
    for(int i=0; str1copy[i]||str2copy[i]; i++)
        if(str1copy[i] == str2copy[i])
            continue;
        else if(str1copy[i]>str2copy[i])
            return 1;
        else
            return -1;
    return 0;
}
// Write a function to count words in a given string.
int countWords(char str[])
{
    int countWords=0, flag=1;
    for(int i=0; str[i]; i++)
    {
        if(str[i]!=' ' && str[i]!='.')
            if(flag)
            {
                countWords++;
                flag=0;
            }
            else
            continue;
        else
            flag=1;
    }
    return countWords;
}

//Q1. Write a function to store strings, taken from user, to the given 2d char array.
void storeStrings(char str[][30],int n)
{
    printf("Enter %d strings : ",n);
    for(int i=0; i<n; i++)
        gets(str[i]);
}
//Q2. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional array, taken from the user.
void countVowelsin2dArr(char str[][30],int n)
{
    for(int i=0; i<n; i++)
        printf("\"%s\" = %d\n",str[i],countVowels(str[i]));
}

//Q3. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
void sort(char str[][30],int n)
{
    char temp[30];
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(cmpStrCIn(str[i],str[j])==1)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
}
//Q4. Write a function to store each word as a string in a 2 dimensional char array.
void separateWords(char strArr[][30], char str[])
{
    int i,j,k; char word[30];

    for(i=0,j=0,k=0; str[i]; i++)
    {
        if(str[i] != ' ' && str[i] != '.')
            word[j++] = str[i];
        else if(str[i-1] != ' ' && str[i-1] != '.') {
            word[j] = 0;
            j=0;
            strcpy(strArr[k++],word);
        }
    }
    
    if(str[i-1] != '.' && str[i-1] != ' '){
    word[j] = 0;
    strcpy(strArr[k],word);}
}
//Q5. Write a function to remove duplicate names stored in the list of names stored in a 2d char array.
void removeDuplicate(char str[][30],int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(cmpStrCIn(str[i],str[j])==0)
                strcpy(str[j],"\0");
}



int main()
{
   /* char str[20][30];
    char string[] = "I am      Prem      Siddhartha.   how    are you...   ";
    separateWords(str,string);
    printf("{");
    int no_words = countWords(string);
    for(int i=0; i<no_words; i++)
            printf("\"%s\", ",str[i]);
    printf("}");*/
    //printf("%d",abs(2-4));
    printf("%d",countVowels("Write a function to remove duplicate names stored in the list of names stored in a 2d char array."));
}