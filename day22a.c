/*Write a C program to count and display the number of Vowels, Consonants and spaces in a string

Input Format

String s in a single line

Constraints

length of string s < 200
all the characters in the string are in lowercase
no numbers or special character will be present in the string
Output Format

First line of output is the number of vowels
Second line of output is the number of consonants
Third line of output is the number of spaces
Sample Input 0

hello world
Sample Output 0

3
7
1
Sample Input 1

hello
Sample Output 1

2
3
0
*/

#include <stdio.h>
int main() 
{
    char str[100];
    int i,c =0,v=0,l=0;
    gets(str);
    for (i = 0;str[i]!='\0';i++)
    {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            v++;    
        else if(str[i]>='a'&& str[i]<='z')
            c++;
        else if(str[i]==' '||str[i]=='\t')
            l++;
    }
    printf("%d\n",v);
    printf("%d\n",c);
    printf("%d\n",l);    
    return 0;
}
