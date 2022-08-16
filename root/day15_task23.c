#include<stdio.h>

main()
{
    char a, b, c;

    for(a = 'A'; a <='E'; a++)
    {
        for(c = a; c < 'E' ; c++)
        {
            printf(" ");
        }
        for(b = 'A'; b <= a; b++)
        {
            if(b == 'A' || b == 'C' || b == 'E')
            {
                printf("|");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
}