#include<stdio.h>

main()
{
    printf("WAP to find maximum using 5 variables using ternary operators!\n\n");

    int a, b, c, d,e ;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    printf("Enter C: ");
    scanf("%d", &c);

    printf("Enter D: ");
    scanf("%d", &d);

    printf("Enter E: ");
    scanf("%d", &e);

    (a<b)
        ?
            (b<c)
                ?
                    (c<d)
                        ?
                            (d<e)
                                ?
                                    printf("E is Max")
                                :
                                    printf("D is Max")
                        :
                            printf("C is Max")
                :
                    printf("B is Max")

        :
            (a<c)
                ?
                    (c<d)
                        ?
                            (d<e)
                                ?
                                    printf("E is Max")
                                :
                                    printf("D is Max")
                        :
                            printf("C is Max")
                :
                    (a<d)
                        ?
                            (d<e)
                                ?
                                    printf("E is Max")
                                :
                                    printf("D is Max")
                        :
                            (a<e)
                                ?
                                :
                                    printf("A is Max");
}
