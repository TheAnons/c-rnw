#include<stdio.h>

main()
{
    char b;

    printf("Enter your preffered character value: ");
    scanf("%c", &b);

    ('a' <= b && b <= 'z' || 'A' <= b && b <='Z')
        ?
            printf("This is a Character")
        :
        ('0' <= b && b <= '9')
            ?
                printf("This is a Digit")
            :
                printf("This is a special character");
}