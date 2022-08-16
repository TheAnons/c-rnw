#include<stdio.h>

main()
{
    int i=0, n, sum =0;

    printf("Enter the Value: ");
    scanf("%d",&n);

    do
    {
        sum = sum + i;
        printf("%d\n", sum);
        i++;
    }
    while(i<=n);

    printf("Total Sum is: %d",sum);
}
