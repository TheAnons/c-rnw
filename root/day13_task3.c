#include<stdio.h>

main()
{
    int Row, Col;

    for(Row = 1; Row <= 5; Row ++)
    {
        for(Col = 1; Col <= Row ; Col ++ )
        {
            printf("%d", Row);
        }
        printf("\n");
    }
}