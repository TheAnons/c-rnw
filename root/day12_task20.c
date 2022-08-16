#include<stdio.h>

main()
{
    int Table, Ans, TableStart, TableEnd;

    printf("What table you want? : ");
    scanf("%d", &Table);

    printf("From where to start table? : ");
    scanf("%d", &TableStart);

    printf("Where to end table? : ");
    scanf("%d", &TableEnd);

    for(Table; TableStart <= TableEnd; TableStart ++)
    {
        Ans = Table * TableStart;
        printf("%d x %d = %d\n", Table, TableStart, Ans);
    }
}