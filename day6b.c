/*Write a C Program to determine the factorial of a number.

Input Format

A single integer specifying the number whose factorial is to be found.

Constraints

If a negative number is given, print a message "ERROR".

Output Format

A single integer specifying the factorial of the given number.

Sample Input 0

5
Sample Output 0

120
Explanation 0

5! = 1*2*3*4*5 = 120

Sample Input 1

-2
Sample Output 1

ERROR */

#include <stdio.h>
int main() 
{
    int i ,n,f=1;
    scanf("%d",&n);
    if(n>0)
    {
        for (i =1; i<= n ; i++)
        {
            f=f*i;
        }
        printf("%d",f);
    }
    else if(n == 0)
    {
        printf("1");
    }
    else
    {
        printf("ERROR");
    }
    return 0;
}

