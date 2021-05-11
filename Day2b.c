//Write a C Program to perform Read and Print operations using the four basic data types in C. (int, float, char & double)
//Sample Input 
//z
//100
//27
//99
#include <stdio.h>
int main()
{
  char a;
  int b;
  float c;
  double d;
  scanf("%c",&a);
  printf("%c\n",a);
  scanf("%d",&b); 
  printf("%d\n",b);
  scanf("%f",&c);
  printf("%f\n",c);
  scanf("%lf",&d);
  printf("%lf",d);  
  return 0;
}
