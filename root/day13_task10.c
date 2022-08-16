#include<stdio.h>

main()
{
    int a, b;

    for(a = 1; a <=5; a ++)
    {
        for(b = 5; a<=b; b--)
        {
            printf("%d", b);
        }
        printf("\n");
    }
}