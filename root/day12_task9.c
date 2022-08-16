#include<stdio.h>

main()
{
    int i=1, n, fact =1;

    printf("Enter the Value: ");
    scanf("%d",&n);

    do
    {
        fact = fact * i;
        printf("%d\n", fact);
        i++;
    }
    while(i<=n);

    printf("Total Factorial is: %d",fact);
}
