#include<stdio.h>

main()
{
    char a, b;

    for(a = 'A'; a <='E'; a++ )
    {
        for(b = 'A'; b <=a; b++)
        {
            printf("%c", b);
        }
        printf("\n");
    }
}