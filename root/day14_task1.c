#include<stdio.h>

main()
{
    char a = 'a', b = 'z';

    do{
        printf("%c", a++);
    }while(a <= b);
}