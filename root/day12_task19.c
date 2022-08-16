#include<stdio.h>

main()
{
    int i, n, product;

    printf("Emter the Value: ");
    scanf("%d", &n);

    for(i = 1, product = 1; i<=n ; i++)
    {
        product = product * i;
        printf("%d\n", product);
    }
    printf("The Factorial of %d is: %d", n, product);
}