#include<stdio.h>

main()
{
    int i=0, n, sum =0;

    printf("Enter the Value: ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum = sum + i;
        printf("%d\n", sum);
        i++;
    }

    printf("Total Sum is: %d",sum);
}
