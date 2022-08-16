#include<stdio.h>

main()
{
    char a, b, c = 'A';

    for(a = 'A'; a <='E'; a++ )
    {
        for(b = 'A'; b <=a; b++)
        {
            printf("%c", c++);
        }
        printf("\n");
    }
}