/*Calculate Electricity  bill*/
#include <stdio.h>
int main()
{
    int units,fixed=160;
    float meterrent=14.28,duty=256.50,total,bill;
    printf("Enter the units:");
    scanf("%d",&units);
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
        bill = 100*3.70 + 100*4.80 +(units-200)*6.40;
    }
    else if(units > 300)
    {
        bill = 100*3.70 + 100*4.80 + 100*6.40 + (units-300)*7.60;
    }
    total=bill+meterrent+duty+fixed;
    printf("Total amount = Rs%.2f",total);
    return 0;
}
