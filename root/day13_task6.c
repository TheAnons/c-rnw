#include<stdio.h>

main()
{
    int Col, Row;

    for(Row = 5; Row >= 1; Row --)
    {
        for(Col = Row; Col <= 5; Col ++)
        {
            printf("%d", Row);
        }
        printf("\n");
    }
}