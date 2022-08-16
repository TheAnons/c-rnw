#include<stdio.h>

main()
{
    printf("WAP to find maximum using 4 variables using ternary operators!\n\n");

    int a, b, c, d;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    printf("Enter C: ");
    scanf("%d", &c);

    printf("Enter D: ");
    scanf("%d", &d);

    (a<b)
        ?
            (b<c)
                ?
                    (c<d)
                        ?
                            printf("D is Max")
                        :
                            printf("C is Max")
                :
                    printf("B is Max")
        :
            (a<c)
                ?
                    printf("C is Max")
                :
                    (a<d)
                        ?
                            printf("D is Max")
                        :
                            printf("A is Max");
}
