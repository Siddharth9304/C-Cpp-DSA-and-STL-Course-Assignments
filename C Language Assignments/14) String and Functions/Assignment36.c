#include<stdio.h>
#include<string.h>

//Q1. Write a function to calculate length of the string.
int lenString(char str[])
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
//Q2. Write a function to reverse a string.
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
//Q3. Write a function to compare two string.
int cmpStr(char str1[], char str2[])
{
    int i;
    for(i=0; str1[i]||str2[i]; i++)
        if(str1[i] == str2[i])
            continue;
        else if(str1[i]>str2[i])
            return 1;
        else
            return -1;
    return 0;
}

//Q4. Write a function to transform string into uppercase.
void upper(char str[])
{
    for(int i=0; str[i]; i++)
        if(str[i]>=97 && str[i]<=122)
            str[i] = str[i]-32;
} 

//Q5. Write a function to transform string into lowercase.
void lower(char str[])
{
    for(int i=0; str[i]; i++)
        if(str[i]>=65 && str[i]<=90)
            str[i] = str[i]+32;
} 

int main()
{
    char str1[] = "I, Dr. Ashish Kumar, owner of Ashish Pet Clinic, Address: Plot no - 493, Sector - 19, Dwarka, New Delhi - 110077, inform that Dr. Anil Kumar is appointed as Consultant for our center.";
   /* char str2[] = "premO";
    printf("%d\n",strcmp(str1,str2));
    printf("%d",cmpStr(str1,str2));*/
    upper(str1);
    printf("%s",str1);
    
}