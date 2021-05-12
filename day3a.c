/*Write a C Program to perform all four basic Mathematical Operations on two numbers taken from user input.
Input Format

The only line consists of the two elements required to compute the results.
Constraints

During division, do convert the denominator to a float value in order to receive a correct solution with decimal points.
Use %.2f while specifying the datatype of the result by division where %f refers to the float data type and .2 specifies the number of decimal points required in value.
Output Format

The first line specifies the output after performing addition on the numbers.
The second line specifies the output after performing subtraction on the numbers.
The third line specifies the output after performing multiplication on the numbers.
The fourth line specifies the output after performing division on the numbers.
Sample Input 0

10 15
Sample Output 0

25
-5
150
0.67 */
#include <stdio.h>
int main() 
{
  int a,b,s,d,p;
  float q;
  scanf("%d",&a);
  scanf("%d",&b);
  s=a+b;
  printf("%d\n",s);
  d=a-b;
  printf("%d\n",d);
  p=a*b;
  printf("%d\n",p);
  q= a/(float)b;
  printf("%.2f",q);  
  return 0;
}
