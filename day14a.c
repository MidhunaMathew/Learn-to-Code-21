/*Write a program in C to Find the Frequency of Characters.

Input Format

First input represents the sentence.
Second input represents the character.
Constraints

Don't use any built-in function.
Character Text = 100
Output Format

Output format represents the frequency of characters.

Sample Input 0

hello world
l
Sample Output 0

3 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char str[100],let;
    int  c=0,i;
    gets(str);
    scanf("%c",&let);
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i] == let)
            c++;    
    }
    if(c==0)
        printf("0");
    else
        printf("%d",c);
    return 0;
}
