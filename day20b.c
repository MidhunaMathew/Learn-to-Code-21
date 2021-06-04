/*Write a C program to find the number of words in a string. Also reverse string.

Input Format

Input a String.

Constraints

Use the concept of functions in C for counting the words and reversing.

Don't use built in functions.

Output Format

First line refers to number of words in the string.

Second line refers to string after reversing.

Sample Input 0

hello world
Sample Output 0

no of words = 2
dlrow olleh */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int reverse(char *str)
{
    int i,c =0,l;
    for (i = 0;str[i]!='\0';i++)
    {
        if (str[i]==' ' && str[i+1]!=' ')
            c++;    
    }
    printf("no of words = %d\n",c+1);
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
    
}
int main() 
{  
    char str[100];
    gets(str);
    reverse (str);
    return 0;
}
