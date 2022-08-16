#include<stdio.h>

int main()
{
    printf("WAP to Find minimum from given 5 number using nested if else\n\n");

    int a, b, c, d, e;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("\nEnter B: ");
    scanf("%d", &b);

    printf("\nEnter C: ");
    scanf("%d", &c);

    printf("\nEnter D: ");
    scanf("%d", &d);

    printf("\nEnter E: ");
    scanf("%d", &e);

    if(a<b){
        if(b<c){
            if(c<d){
                if(d<e){
                    printf("E is Max");
                }
                else{
                    printf("D is Max");
                }
            }
            else{
                printf("C is Max");
            }
       }
       else{
            printf("B is Max");
       }
    }

    else{
        if(a<c){
            if(c<d){
                if(d<e){
                    printf("E is Max");
                }
                else{
                    printf("D is Max");
                }
            }
            else{
                printf("C is Max");
            }
        }
        else{
            if(a<d){
                printf("D is Max");
            }
            else{
                if(a<e){
                    printf("E is Max");
                }
                else{
                    printf("A is Max");
                }
            }
        }
    }
    return 0;
}
