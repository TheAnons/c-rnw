#include<stdio.h>

main()
{
    int a, b, c;

    printf("Enter A: ");
    scanf("%d",&a);

    printf("Enter B: ");
    scanf("%d",&b);

    printf("Enter C: ");
    scanf("%d",&c);

    if(a<b){
        if (b>c)
        {
            printf("B is Max");
        }
        else
        {
            printf("C is Max");
        }    
    }

    else{
        if(a<c){
            printf("C is Max");
        }
        else{
            printf("A is Max");
        }
    }
}