#include<stdio.h>

main()
{
    int start, ans, table, end;

    printf("What table you want to know about? : ");
    scanf("%d",&table);

    printf("From where you want to start the table? : ");
    scanf("%d",&start);

    printf("When you want the table to end? : ");
    scanf("%d",&end);

    while(start<=end) //Multiplication table till 10
    {
        ans = table * start;
        printf("%d x %d = %d\n", table, start, ans);
        start++;
    }
}
