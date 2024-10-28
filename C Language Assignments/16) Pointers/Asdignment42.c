#include<stdio.h>
//Q1. Write a function to swap values of two int variables.(TSRN)
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


//Q2. Write a function to search all occurences of a given character in a given string. Result of search is a list of indices to be stored in the given array.
void search_all_occurenecs(char *str, char ch, int *arr)
/*{
    int ind = 0;
    for(int i=0; str[i]; i++)
        if(str[i]==ch)
            arr[ind++] = i;
}*/
/*{
    for(int i=0 ; *str ; str++,i++)
        if(*str==ch)
        { 
            *arr = i;
            arr++;
        }
}*/
{
    for(int i=0 ; *(str+i) ; i++)
        if(*(str+i)==ch)
        { 
            *arr = i;
            arr++;
        }
}

//Q3. Write a function to convert a given string into uppercase.
void upper(char *str)
/*{
    while(*str)
    {
        if(*str>='a' && *str<='z')
            *str = *str - ('a' - 'A');
        str++;
    }
}*/
/*{
    for(int i=0; str[i]; i++)
        if(str[i]>='a' && str[i]<='z')
           str[i] = str[i] - ('a' - 'A'); 
}*/
{
    for(int i=0; *(str+i); i++)
        if(*(str+i)>='a' && *(str+i)<='z')
           *(str+i) = *(str+i) - ('a' - 'A'); 
}

//Q4. Write a function to convert a given string into lowercase.
void lower(char *str)
/*{
    while(*str)
    {
        if(*str>='A' && *str<='Z')
            *str = *str + ('a' - 'A');
        str++;
    }
}*/
/*{
    for(int i=0; str[i]; i++)
        if(str[i]>='A' && str[i]<='Z')
           str[i] = str[i] + ('a' - 'A'); 
}*/
{
    for(int i=0; *(str+i); i++)
        if(*(str+i)>='A' && *(str+i)<='Z')
           *(str+i) = *(str+i) + ('a' - 'A'); 
}

//Q5. Write a function to extract a substring from a given string with specified start index(inclusive) and end index(exclusive), and store the extracted string in a given char array.
void extract_string(char *str, int start_index, int end_index, char *result)
/* more efficient because of less variables and less operations
{
    for(int i=start_index; str[i] && i<end_index; i++,result++) 
        *result = str[i];
    *result = 0;       
}*/
/*{
    int i,j;
    for(i=start_index,j=0; str[i] && i<end_index; i++,j++)
        result[j] = str[i];
    result[j] = 0;       
}*/
{
    int i,j;
    for(i=start_index,j=0; str[i] && i<end_index; i++,j++)
        *(result+j) = str[i];
    *(result+j) = 0;   s    
}

int main()
{
   char str[] = "Prem Siddhartha";
   char res[20];
   extract_string(str,6,20,res);
   printf("%s",res);
}