#include<stdio.h>

main()
{
    char a;

    printf("Type the following characters to print the day of the week\n");
    printf("Y, M, T, W, X, F, N\n");
    scanf("%c",&a);

    switch (a)
    {
    case 'Y':
    case 'y':
        printf("Sunday");
        break;

    case 'M':
    case 'm':
        printf("Monday");
        break;

    case 'T':
    case 't':
        printf("Tuesday");
        break;

    case 'W':
    case 'w':
        printf("Wednesday");
        break;

    case 'X':
    case 'x':
        printf("Thursday");
        break;

    case 'F':
    case 'f':
        printf("Friday");
        break;

    case 'N':
    case 'n':
        printf("Saturday");
        break;
    
    default:
        printf("Error! Please enter the value correctly");
        break;
    }
}