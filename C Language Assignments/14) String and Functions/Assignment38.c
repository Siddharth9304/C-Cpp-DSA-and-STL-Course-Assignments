#include<stdio.h>
#include<string.h>
void lower(char str[])
{
    for(int i=0; str[i]; i++)
        if(str[i]>=65 && str[i]<=90)
            str[i] = str[i]+32;
} 
//Q1. Write a function to check whether a given string is palindrome or not.
int isPalindrome(char str[])
{
    int len = strlen(str);
    for(int i=0; i<len/2; i++)
        if(str[i]!=str[len-1-i] && str[i]!=str[len-1-i]+32 && str[i]!=str[len-1-i]-32)
            return 0;
    return 1;
}
//Q2. Write a function to trim a string(removing leading spaces from both the ends)
void trimStr(char str[])
{  
    int i;
    while(str[0]==' ')
        for(int i=0; str[i]; i++)
            str[i] = str[i+1];
    for(i=strlen(str)-1; str[i]==' '; i--);
    str[i+1]=0;
}
//Q3. Write a function to count words in a given string.
int wordsinStr(char str[])
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
//Q4. Write a function to reverse a string word wise.
char* reverseStrbywords(char str[])
{
    char str1[1000], str2[1000]="";
    int i,j;
    for(i=0,j=0; str[i] && str[i] != '.'; i++)
        if(str[i] != ' ')
            str1[j++] = str[i];
        else
        {
            str1[j++] = ' ';
            str1[j] = 0;
            strcpy(str2,strcat(str1,str2));
            j=0;
        }
   
    str1[j++] = ' ';
    str1[j] = 0;
    strcpy(str2,strcat(str1,str2));
   
    if(str[i] == '\0')
        str2[i] = '\0';
    else
        str2[i] = '.';
    
    return strcpy(str,str2);

    
}
//Q5. Write a function to do case insensitive comparison of two strings.
int cmpStrCIn(char str1[], char str2[])
{
    lower(str1);
    lower(str2);
    for(int i=0; str1[i]||str2[i]; i++)
        if(str1[i] == str2[i])
            continue;
        else if(str1[i]>str2[i])
            return 1;
        else
            return -1;
    return 0;
}



int main()
{
    char str1[1000] = "Write a function to do case insensitive comparison of two strings.";
    //printf("%d\n",strlen(str));
    //trimStr(str);
    //printf("%s\n",str);
    //printf("%d",strlen(str));
    printf("%s\n",reverseStrbywords(str1));

}