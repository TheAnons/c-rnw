#include<stdio.h>

main()
{
    int i, n;

    printf("Enter the Value: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        if(i%2 != 0)
        {
            printf("%d\n",i);
        }
    }
}