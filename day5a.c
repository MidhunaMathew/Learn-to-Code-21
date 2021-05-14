/*Write a C Program to verify if a given year is a leap year or no

Input Format

The only value in the input is a random year on which the verification is to be made.
Constraints

If a given year has to be a leap year, then - The year must be divisible by 400. - The year must be divisible by 4 but not be divisible by 100.

Output Format

The only value in the output refers to the conclusion if the inputted year is a leap year or not.
Sample Input 0

2000
Sample Output 0

Yes */

#include <stdio.h>

int main() 
{
    int year;
    scanf("%d",&year);
    if ((year%400 ==0) || (year%4 == 0 && year%100 != 0) )
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
  return 0;
}
