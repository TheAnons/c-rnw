#include<stdio.h>

main()
{
    char a, b, c;

    for(a = 'E'; a >='A'; a--)
    {
        for(c = 'F'; c > a ; c--)
        {
            printf(" ");
        }
        for(b = 'A'; b <= a; b++)
        {
            if(b == 'B' || b == 'D')
            {
            printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}