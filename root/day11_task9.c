#include<stdio.h>

main()
{
    int i=1, n, fact =1;

    printf("Enter the Value: ");
    scanf("%d",&n);

    while(i<=n)
    {
        fact = fact * i;
        printf("%d\n", fact);
        i++;
    }

    printf("Total Factorial is: %d",fact);
}
