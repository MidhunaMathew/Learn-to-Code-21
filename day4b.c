/*Write a C Program to convert Fahrenheit to Celsius.

Input Format

The only line in the input displays a temperature in Fahrenheit that is to be converted to Celsius
Constraints

Use float values inorder to avoid errors.
Output Format

The only line in the output displays the temperature in Celsius after the conversion.
Sample Input 0

32
Sample Output 0

0.00 */
#include <stdio.h>
int main() {
    float f,c;
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("%.2f",c);
    return 0;
}
