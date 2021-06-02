/*Write a C program to swap the values of two variables.

Input Format

Input two numbers a and b.

Constraints

Use the concept of funtions in C to swap values.

Output Format

First line of output refers to values before swapping.

Second line of output refers to values after swapping.

Sample Input 0

11 20
Sample Output 0

a=11 b=20
a=20 b=11
Sample Input 1

5 33
Sample Output 1

a=5 b=33
a=33 b=5*/ 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d b=%d",a,b);
    return 0;
}
int main() 
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    swap(a,b);
    return 0;
}

