#include<stdio.h>

main()
{
    int a, b, c;

    for(a = 5; a >=1; a--)
    {
        for(c = 6; c > a; c--)
        {
            printf(" ");
        }
        for(b = a; b >= 1; b--)
        {
            printf("%d", b);
        }
        printf("\n");
    }
}