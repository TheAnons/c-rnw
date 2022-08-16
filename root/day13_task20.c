#include<stdio.h>

main()
{
    int a, b;

    for(a = 5; a>=1; a--)
    {
        for(b = a; b <= 5; b++)
        {
            if(b%2==1)
            {
                printf("- ");
            }
            else
            {
            printf("| ");
            }
        }
        printf("\n");
    }
}