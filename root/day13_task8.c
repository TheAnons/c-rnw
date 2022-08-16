#include<stdio.h>

main()
{
    int a, b;

    for(a = 5; a >=1; a --)
    {
        for(b = 1; a>=b; b++)
        {
            printf("%d", b);
        }
        printf("\n");
    }
}