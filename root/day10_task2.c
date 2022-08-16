#include<stdio.h>

main()
{
    int a;

    printf("Enter the number: \n");
    scanf("%d", &a);

    (a%2 == 0)
        ?
            printf("The number is Even!")
        :
            printf("The number is odd!");
}