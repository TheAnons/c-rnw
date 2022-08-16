#include<stdio.h>

main()
{
    int a, b;

    for(b = 5; b >=1; b --)
    {
    for(a = 1; a <= b; a++)
    {
        printf("%d",a);
    }
    printf("\n");
    }
}