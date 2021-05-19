/*Write a C Program to identify if a number is a palindrome or not.

Input Format

The only line in the input refers to the number to check for as a palindrome.
Constraints

Use the while loop
Output Format

The output displays if it is a palindrome or not.
Sample Input 0

1331
Sample Output 0

Yes
Sample Input 1

123
Sample Output 1

No */

#include <stdio.h>
int main() 
{
    int n,s=0,m,x;
    scanf("%d",&n);
    m=n;
    while (n>0)
    {
        x=n%10;
        s=s*10+x;
        n=n/10;
    }
    if (m==s)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
