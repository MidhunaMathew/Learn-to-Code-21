/*WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F

Input Format

The three numbers are the marks received of three different subjects.

Constraints

None

Output Format

The first line in the output is the percentage received.
The second line in the output is the corresponding grade.
Sample Input 0

35 77 82
Sample Output 0

64.67
D */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float a,b,c,percentage;
    scanf("%f%f%f",&a,&b,&c);
    percentage=(a+b+c)/3;
    if(percentage>=90)
    {
        printf("%.2f \nA",percentage);
    }
    else if(percentage >=80)
    {
        printf("%.2f \nB",percentage);
    }
    else if(percentage >= 70)
    {
        printf("%.2f \nC",percentage);
    }
    else if(percentage >= 60)
    {
        printf("%.2f \nD",percentage);    
    }
    else if(percentage >= 40)
    {
        printf("%.2f \nE",percentage);
    }
    else
    {
        printf("%.2f \nF",percentage);
    }
    return 0;
}
