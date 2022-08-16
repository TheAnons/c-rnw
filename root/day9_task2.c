#include<stdio.h>

main()
{
    char a;

    printf("Enter the selection accordingly to the following words!\n\n");
    printf("j, m, f, a, y, u, l, g, t, o, n, d \n\n");
    printf("The following are shuffled! See what you get.");
    printf("Enter your Selection: ");
    scanf("%c",&a);

    switch(a)
    {
        case 'j':
            printf("The month is January\n\n");
            break;

        case 'f':
            printf("The month is February\n\n");
            break;

        case 'm':
            printf("The month is March\n\n");
            break;

        case 'a':
            printf("The month is April \n\n");
            break;

        case 'y':
            printf("The month is May\n\n");
            break;

        case 'u':
            printf("The month is June\n\n");
            break;

        case 'l':
            printf("The month is July\n\n");
            break;

        case 'g':
            printf("The month is August\n\n");
            break;

        case 't':
            printf("The month is September\n\n");
            break;

        case 'o':
            printf("The month is October\n\n");
            break;

        case 'n':
            printf("The month is November\n\n");
            break;

        case 'd':
            printf("The month is December\n\n");
            break;
    }
}
