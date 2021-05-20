/*C program to print the HCF of two numbers

Input Format

Two numbers seperated by space

Constraints

Cannot use any built in functions

Output Format

The HCF of the two numbers

Sample Input 0

8 6
Sample Output 0

2 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d",&a,&b);
    while(b>0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    
    printf("%d",a);
    return 0;
}
