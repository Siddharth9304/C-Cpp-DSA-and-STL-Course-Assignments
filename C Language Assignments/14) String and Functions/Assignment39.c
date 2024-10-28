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
//Q1. Write a function to count frequency of each character of the given string.
void countFreq(char str[])
{
    int len = strlen(str),i,j,count;
    char copyStr[1000];
    strcpy(copyStr,str);
    sortStr(copyStr);
    for(i=0; i<len; i=j)
    {
        count=1;
        for(j=i+1; copyStr[i]==copyStr[j]; j++)
            count++;
        printf("'%c' = %d times\n",copyStr[i],count);
    }

}
//Q2. Write a function to find a word in a given string.
int findWord(char str[], char word[])
{
    int i,j; char temp[30];

    for(i=0,j=0; str[i]; i++)
    {
        if(str[i] != ' ' && str[i] != '.')
            temp[j++] = str[i];
        else{
            temp[j] = 0;
            j=0;
            if(!strcmp(temp,word))
                return 1;
        }
    }
    
    temp[j] = 0;
    if(!strcmp(temp,word))
        return 1;
    
    return 0;


}

//Q3. Write a function to make first character of each word of the string capital.
void capitalWords(char str[])
{
    int flag=1;
    for(int i=0; str[i]; i++)
    {
        if(str[i]!=' ' && str[i]!='.')
        {   
            if(flag)
            {
                if(str[i]>='a'&&str[i]<='z')
                    str[i]=str[i]-32;
                flag=0;
            }
        }
        else
            flag=1;
    }
}
//Q.4 Write a function to make acronym name from a given name.
char* acronym(char name[], char acr_name[])
{
    int i,j,k; char temp[30];

    for(i=0,j=0,k=0; name[i]; i++)
    {
        if(name[i] != ' ')
            temp[j++] = name[i];
        else{
            temp[j] = 0;
            j=0;
            acr_name[k++] = temp[0];
            acr_name[k++] = ' ';
        }
    }
    
    acr_name[k] = 0; 
    temp[j] = 0;
    return strcat(acr_name, temp);
}

//Q5. Write a function to concatenate two strings.
char* cntStr(char str1[], char str2[])
{  
    int len = strlen(str1);
    for(int i=0; str2[i]; i++,len++)
        str1[len]=str2[i];
    str1[len]=0;
    return str1;
}


int main()
{
    
    char str[]="Write a function to make acronym name from a given name.";
    capitalWords(str);
    printf("%s",str);
    return 0;
}