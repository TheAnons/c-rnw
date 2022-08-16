#include<stdio.h>

main()
{
    int i = 0, n;

    printf("Enter the Value: ");
    scanf("%d",&n);

    while(n>i)
    {
        if(i%2 != 0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}
