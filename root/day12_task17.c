#include<stdio.h>

main()
{
    int InitialYear, FinalYear;

    for(InitialYear = 2000, FinalYear = 3000; InitialYear <= FinalYear; InitialYear ++)
    {
        if(InitialYear % 4 == 0)
        {
            printf("%d\n", InitialYear);
        }
    }
}