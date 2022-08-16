#include<stdio.h>

main()
{
    int a, b = 1, fact = 1;

    printf("Enter the numner : ");
    scanf("%d", &a);

    while (b <= a)
    {
        fact = fact * b;
        b ++;
    }

    printf("The Factorial of the given number is : %d", fact);
    
}