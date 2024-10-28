#include<stdio.h>
#include<string.h>

//Q1. Write a program to calculate the length of the string.(without using builtin method)
int lenString(char str[])
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
//Q2. Write a program to count the occurence of a given character in a given string. 
int occurence(char str[], char c)
{
    int count=0;
    for(int i=0; str[i]; i++)
        if(str[i]==c)
            count++;
    return count;
}
//Q3. Write a program to count vowels in a given string. 
int no_Vowels(char str[])
{
    int count=0;
    for(int i=0; str[i]; i++)
        switch(str[i])
        {
            case 'a': case 'e': case 'i': case 'o': case 'u': 
            case 'A': case 'E': case 'I': case 'O': case 'U': 
            count++;
        }
    return count;
}
//Q4. Write a program to count spaces in a given string. 
int no_Spaces(char str[])
{
    int count=0;
    for(int i=0; str[i]; i++)
        if(str[i]==' ')
            count++;
    return count;
} 
//Q5. Write a program to convert a given string into uppercase. 
void upper(char str[])
{
    for(int i=0; str[i]; i++)
        if(str[i]>=97 && str[i]<=122)
            str[i] = str[i]-32;
} 

int main()
{
    char str[20],c;
    printf("Enter String : ");
    fgets(str,20,stdin);
    str[strlen(str)-1] = 0;
    //printf("Enter character to check it's no. of occurence : ");
    //scanf("%c",&c);
    printf("length of a given string = %d\n",lenString(str));
    //printf("'%c' occurs %d times in the given string",c,occurence(str,c));
    //printf("no. of vowels in a given string = %d",no_Vowels(str));
    //printf("no. of spaces in a given string = %d",no_Spaces(str));
    //upper(str);
    printf("%s",str);
    return 0;
}