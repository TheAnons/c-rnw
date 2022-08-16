#include<stdio.h>

main()
{
    int Row, Col;

    for(Row = 1; Row <= 5; Row ++)
    {
        for(Col = Row; Col >= 1; Col --)
        {
            printf("%d",Col);
        }
        printf("\n");
    }
}