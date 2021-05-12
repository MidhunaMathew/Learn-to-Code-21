/*Write a C Program to read an integer and find it's square root.

Input Format

The number represent an integer whose square root is to be determined
Constraints

Use of math.h in the preprocessor directives
Use of the pre-defined function sqrt
Output Format

The number represents the square root value of the integer accepted from user input.
Sample Input 0

4
Sample Output 0

2.0 */

#include <stdio.h>
#include <math.h>
int main() 
{
 int a;
 float rt;
 scanf("%d",&a);
 rt = sqrt(a);
 printf("%.1f",rt);
 return 0;
}
