#include<stdio.h>

main()
{
    char a, b, c;

    for(a = 'A'; a <='E'; a++)
    {
        for(c = 'A'; c <= a ; c++)
        {
            printf(" ");
        }
        for(b = a; b <= 'E'; b++)
        {
            printf("%c", b);
        }
        printf("\n");
    }
}