#include<stdio.h>

main()
{
    int i = 0, n;

    printf("Enter the Value: ");
    scanf("%d",&n);

    do
    {
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
}
