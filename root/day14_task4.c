#include<stdio.h>

main()
{
    int fNumber, number, lNumber, sum;

    printf("Enter the Number : ");
    scanf("%d", &number);

    lNumber = number%10;

    while(number>9)
    {
        number = number/10;
    }

    fNumber = number; 

    sum = lNumber + fNumber;

     printf("Sum of First and Last Digits is : %d ", sum);
}
