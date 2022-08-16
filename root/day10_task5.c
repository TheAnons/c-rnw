#include<stdio.h>

int main()
{
    float price, units;

    printf("Enter the units: ");
    scanf("%f", &units);

    if(units<0){
        printf("Enter the value Correctly");
        return 0;
    }

    else if(units<=50)
    {
       price = units * 0.50;

    }

    else if(units<=150)
    {
        price = (units-50) * 0.75 + 25;
    }

    else if(units<=250)
    {
        price = (units - 150) * 1.20 + 100;
    }

    else{
        price = (units - 250) * 1.50 + 220;
    }

    price = price + (price * 0.2);

    printf("The total bill is %.2f", price);
}