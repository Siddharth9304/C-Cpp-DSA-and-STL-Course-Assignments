#include<stdio.h>

//Q1. Write a function to count vowels in a given string.
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
//Q2. Write a function to find the character in a given string.Return index of first occurence of a given character.Return -1 if character not found.
int findCharacter(char str[], char c)
{
    for(int i=0; str[i]; i++)
        if(str[i]==c)
            return i;
    return -1;
}
//Q3. Write a function to find the character in a given string between specified indices(start index(inclusive) and end index(exclusive))
int findCharacterS(char str[], char c, int start, int end)
{
    for(int i=start; i<end && str[i]; i++)
        if(str[i]==c)
            return i;
    return -1;
}
//Q4. Write a function to swap two characters of a given string with specified indices.
void swaptwocharacters(char str[], int ind1, int ind2)
{
    char temp;
    if(ind1<strlen(str) && ind2<strlen(str))
    {
        temp = str[ind1];
        str[ind1] = str[ind2];
        str[ind2] = temp;
    }
}
//Q5. Write a function to check whether a given string is an alphanumeric string or not.(Alphanumeric string must contain atleast one alphabet and one digit)
int isAlphanumeric(char str[])
{
    int countAlpha=0,countDigit=0;
    for(int i=0; str[i]; i++)
        if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
            countAlpha++;
        else if(str[i]>='0'&&str[i]<='9')
            countDigit++;
    if(countAlpha&&countDigit)
        return 1;
    else 
        return 0;
}
int main()
{
    char str[] = "Z9";
    printf("%d",isAlphanumeric(str));
}