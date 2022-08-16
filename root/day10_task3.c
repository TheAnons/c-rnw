#include<stdio.h>

main()
{
    int a, b, c, d;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);
    
    printf("Enter the third number: ");
    scanf("%d", &c);

    printf("Enter the fourth number: ");
    scanf("%d", &d);

    (a<b)
        ?
            (b<c)
                ?
                    (c<d)
                        ?
                            printf("Fourth Number is Max")
                        :
                            printf("Third Number is Max")
                :
                    printf("Second Number is Max")
        :
            (a<c)
                ?
                    (c<d)
                        ?
                            printf("Fourth NUmber is Max")
                        :
                            printf("Third Number is Max")
                :
                    (a<d)
                        ?
                            printf("Fourth Number is Max")
                        :
                            printf("First Number is Max");
        
}