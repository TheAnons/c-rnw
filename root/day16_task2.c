#include<stdio.h>

main()
{
    int b = rand() * rand() % 2 + rand();
    int a[b];

    printf("Length of array is : %d\n", sizeof(a)/sizeof(int));
    printf("Size of Array is : %d", sizeof(a));

}