#include<stdio.h>

main()
{
    int Row, Col;

    for(Row = 5; Row >= 1; Row --)
    {
        for(Col = 5; Col >= Row; Col --)
        {
            printf("%d", Col);
        }
        printf("\n");
    }
}