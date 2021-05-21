/* Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c

Roots of the equation is given by the equation

Input Format

The user will input the coefficients of the quadratic equation a , b, c

First 3 numbers seperated by space will be a b and c respectively

Constraints

Only built in function that can be used is sqrt()

Output Format

Output should be the nature of the roots followed by the roots seperated by coma

Sample Input 0

1 2 5
Sample Output 0

Complex: -1.00 + i2.00 , -1.00 - i2.00
Sample Input 1

1 4 1
Sample Output 1

Distinct Real : -0.27 , -3.73
Sample Input 2

1 2 1
Sample Output 2

Equal Real: -1.00 , -1.00 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,b,c,det;
    float r1, r2,real,img;
    scanf("%d%d%d",&a,&b,&c);
    det = (b*b)-(4*a*c);
    if(det < 0)
    {
        real= -b/(float)2*a;
        img = sqrt(-det)/(float)2*a;
        printf("Complex: %.2f + i%.2f , %.2f - i%.2f",real,img,real,img);
    }
    else if(det == 0)
    {
          r1 = -b/(float)2*a;
          printf("Equal Real: %.2f , %.2f",r1,r1);
    }
    else
    {
        r1 = (float)(-b + sqrt(det))/2*a;
        r2 = (float)(-b - sqrt(det))/2*a;
        printf("Distinct Real : %.2f , %.2f",r1,r2);
    }
    return 0;
}
