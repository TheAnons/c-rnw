#include<stdio.h>

main()
{
    int i=2000, n=3000;

    while(n>=i)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}
