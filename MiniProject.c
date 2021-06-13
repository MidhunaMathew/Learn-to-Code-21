/*C program to calculate Electricity  bill*/
#include <stdio.h>
int reading(int units)
{
    int fixed=160;
    float meterrent=14.28,duty=256.50,total,bill;
    if(units <= 100) 
    {
       bill = units*3.70; 
    }
    else if(units<=200)
    {
        bill = 100*3.70 + (units-100)*4.80;
    }
    else if(units<=300)
    {
        bill = 100*3.70 + 100*4.80 +(units-200)*5.40;
    }
    else if(units > 300)
    {
        bill = 100*3.70 + 100*4.80 + 100*5.40 + (units-300)*6.10;
    }
    total=bill+meterrent+duty+fixed; //total amount including taxes
    printf("Total amount = Rs%.2f",total);
    return 0;
}
int main()
{
    int units;
    printf("Enter the units:"); //current meter reading - previous meter reading
    scanf("%d",&units);
    reading(units);
    return 0;
}


/*OUTPUT
Enter the units:340
Total amount = Rs2064.78 */



