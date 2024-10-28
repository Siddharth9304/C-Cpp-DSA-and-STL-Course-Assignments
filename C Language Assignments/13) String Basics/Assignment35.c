#include<stdio.h>
int lenString(char str[])
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}

//Q1. Write a program to convert a given string into lowercase. 
void lower(char str[])
{
    for(int i=0; str[i]; i++)
        if(str[i]>=65 && str[i]<=90)
            str[i] = str[i]+32;
} 

//Q2. Write a program to reverse a string.
char* reverseStr(char str[])
{
    char temp;
    int len = lenString(str);
    for(int i=0; i<len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
    return str;
}
//Q3. Write a program to count the total number of alphabets, digits and special characters in a string.
void countCharacters(char str[])
{
    int countAlph=0,countDigits=0,countspech=0;
    for(int i=0; str[i]; i++)
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
            countAlph++;
        else if(str[i]>=48 && str[i]<=57)
            countDigits++;
        else
            countspech++;

    printf("no. of alphabets = %d\n",countAlph);
    printf("no. of digits = %d\n",countDigits);
    printf("no. of special characters = %d\n",countspech);
}
//Q4. Write a program to copy one string to another char array.
char* copyStr(char str1[],char str2[])
{
    int i;
    for(i=0; str2[i]; i++)
        str1[i] = str2[i];
    str1[i] = '\0';
    return str1;
}
//Q5. Write a program to find the first occurence of a given character in a given string.
int firstOccurence(char str[], char c)
{
    for(int i=0; str[i]; i++)
        if(str[i]==c)
            return i;
    return -1;
}

int main()
{
    char str[]="premsiddharth14@gmail.com";
    //char strc[30];
    //lower(str);
    //printf("%s",str);
    //countCharacters(str);
    //printf("%s",copyStr(strc,str));
    printf("%d",firstOccurence(str,'4'));
    
    
}