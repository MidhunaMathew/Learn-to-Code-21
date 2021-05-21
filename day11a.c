/*Write a C program to print the above series starting from 0 and the upperlimit is determined by the user

Input Format

The user will input n or the number of terms required

Constraints

0<=N<=100

Output Format

The series each seperated by a space

Sample Input 0

9
Sample Output 0

0 1 1 2 3 5 8 13 21 
Sample Input 1

22
Sample Output 1

0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946  */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int  n,a=0,b=1,s,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        s = a+b;
        a=b;
        b=s;
    }
    return 0;
}
