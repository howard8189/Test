#include<stdio.h>
int main(void)
{
    float m;
    scanf("%f",&m);
    if(m<=750) 
    {
        printf("Tax due: $%.2f",m/100); 
    }
    else if(m<=2250.00)
    {
        printf("Tax due: $%.2f",7.50+(m-750.00)/50);
    }
    else if(m<=3750.00)
    {
        printf("Tax due: $%.2f",37.50+3*(m-2250.00)/(100));
    }
    else if(m<=5250.00)
    {
        printf("Tax due: $%.2f",82.50+4*(m-3750.00)/100);
    }
    else if(m<=7000.00)
    {
        printf("Tax due: $%.2f",142.50+5*(m-5250.00)/100);
    }
    else 
    {
        printf("Tax due: $%.2f",230.00+6*(m-7000.00)/100); 
    }
    return 0;
}