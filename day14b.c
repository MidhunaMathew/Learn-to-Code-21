/*Write a C program to change the case of alphabets.

Input Format

If a lower/upper case alphabet is present covert it into upper/lower case.
Constraints

Don't use built-in function to swap the cases(strlwr).
Character string = 100
UPPER CASE - The upper case alphabets ASCII value range is from 65 to 90. If the ASCII value of any character of the string is in the range between 65 to 90, Add 32 to the ASCII value of the character to convert into lower case.

LOWER CASE - The lower case alphabets ASCII value range is from 97 to 122. If the ASCII value of any character of the string is in the range between 97 to 122, Substract 32 to the ASCII value of the character to convert into upper case.

Output Format

The string should be converted to uppercase if the input string is in lowercase and vice-versa.
Sample Input 0

hello world
Sample Output 0

HELLO WORLD 
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char str[100]; 
    int i;
    gets(str);
    for(i=0; str[i]!= '\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z')
        {    
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
    
    return 0;
}
