#include<stdio.h>

main()
{
    int a, b, c;

    for(a = 5; a >= 1; a--)
    {
        for(b = 1; b <= a; b++)
        {
            printf("%d", b);
        }

        for(c = 5; c>a; c--)
        {
            printf("  ");
        }

        for(b = a; b >= 1; b--)
        {
            printf("%d", b);
        }
        printf("\n");
    }
}