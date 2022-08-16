#include<stdio.h>

main()
{
    int i, n, sum;

    printf("Emter the Value: ");
    scanf("%d", &n);

    for(i = 0, sum = 0; i<=n ; i++)
    {
        sum = sum + i;
        printf("%d\n", sum);
    }
    printf("The Total Sum is: %d",sum);
}