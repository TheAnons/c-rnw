#include<stdio.h>

int task1(), task2(), task3(), task4(), task5(), task6(), task7(), task8(), task9(), task10(), task11(), task12(), task13(), task14(), task15(), task16(), task17(), task18(), task19(), task20(), task21(), task22();

int main()
{
    while(1)
    {
        printf("\nSelect the Task you want to see.\n\n");
        printf("Task 1-22\n\n");

        int opt;

        printf("Enter the task number to proceed : ");
        scanf("%d", &opt);

        fflush(stdin);

        switch(opt)
        {
            default:
            printf("\n\nENTER THE VALUE CORRECTLY!\n\n");
            break;

            case 1:
            task1();
            break;

            case 2:
            task2();
            break;

            case 3:
            task3();
            break;

            case 4:
            task4();
            break;

            case 5:
            task5();
            break;

            case 6:
            task6();
            break;

            case 7:
            task7();
            break;

            case 8:
            task8();
            break;

            case 9:
            task9();
            break;

            case 10:
            task10();
            break;

            case 11:
            task11();
            break;

            case 12:
            task12();
            break;

            case 13:
            task13();
            break;

            case 14:
            task14();
            break;

            case 15:
            task15();
            break;

            case 16:
            task16();
            break;

            case 17:
            task17();
            break;

            case 18:
            task18();
            break;

            case 19:
            task19();
            break;

            case 20:
            task20();
            break;

            case 21:
            task21();
            break;

            case 22:
            task22();
            break;
        }
    }
    return 0;
}

int task1()
{
    int Row, Col;

    for(Row = 1; Row <= 5; Row ++ )
    {
        for(Col = 1; Col <= Row; Col++)
        {
            printf("%d", Col);
        }
        printf("\n");
    }
    return 1;
}

int task2()
{
    int Row, Col;

    for(Row = 1; Row <= 5; Row ++)
    {
        for(Col = Row; Col >= 1; Col --)
        {
            printf("%d",Col);
        }
        printf("\n");
    }
    return 1;
}

int task3()
{
    int Row, Col;

    for(Row = 1; Row <= 5; Row ++)
    {
        for(Col = 1; Col <= Row ; Col ++ )
        {
            printf("%d", Row);
        }
        printf("\n");
    }
    return 1;
}

int task4()
{
    int Row, Col;

    for(Row = 5; Row >= 1; Row --)
    {
        for(Col = 5; Col >= Row; Col --)
        {
            printf("%d", Col);
        }
        printf("\n");
    }
    return 1;
}

int task5()
{
    int Col, Row;

    for(Row = 5; Row >= 1; Row --)
    {
        for(Col = Row; Col <= 5; Col ++)
        {
            printf("%d", Col);
        }
        printf("\n");
    }
    return 1;
}

int task6()
{
    int Col, Row;

    for(Row = 5; Row >= 1; Row --)
    {
        for(Col = Row; Col <= 5; Col ++)
        {
            printf("%d", Row);
        }
        printf("\n");
    }
    return 1;
}

int task7()
{
    int a, b;

    for(b = 5; b >=1; b --)
    {
    for(a = 1; a <= b; a++)
    {
        printf("%d",a);
    }
    printf("\n");
    }
    return 1;
}

int task8()
{
    int a, b;

    for(a = 5; a >=1; a --)
    {
        for(b = 1; a>=b; b++)
        {
            printf("%d", b);
        }
        printf("\n");
    }
    return 1;
}

int task9()
{
    int a, b;

    for(a = 1; a <=5; a ++)
    {
        for(b = 5; a<=b; b--)
        {
            printf("%d", a);
        }
        printf("\n");
    }
    return 1;
}

int task10()
{
    int a, b;

    for(a = 1; a <=5; a ++)
    {
        for(b = 5; a<=b; b--)
        {
            printf("%d", b);
        }
        printf("\n");
    }
    return 1;
}

int task11()
{
    int a, b;

    for(a = 5; a >=1; a --)
    {
        for(b = a; b>=1; b--)
        {
            printf("%d", b);
        }
        printf("\n");
    }
    return 1;
}

int task12()
{
    int a, b;

    for(a = 5; a >=1; a --)
    {
        for(b = a; b>=1; b--)
        {
            printf("%d", a);
        }
        printf("\n");
    }
    return 1;
}

int task13()
{
    int a, b;

    for(a = 1; a <=5; a ++)
    {
        for(b = 1; b<=a; b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 1;
}

int task14()
{
    int a, b;

    for(a = 1; a <=5; a ++)
    {
        for(b = 5; b>=a; b--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 1;
}

int task15()
{
    int a, b;

    for(a = 1; a <=5; a ++)
    {
        for(b = a; b>=1; b--)
        {
            if(b%2==1)
            {
            printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 1;
}

int task16()
{
    int a, b;

    for(a = 5; a >=1; a --)
    {
        for(b = a; b>=1; b--)
        {
            if(b%2==1)
            {
            printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 1;
}

int task17()
{
    int a, b;

    for(a = 1; a <=5; a ++)
    {
        for(b = 1; b<=a; b++)
        {
            if(b%2==1)
            {
            printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 1;
}

int task18()
{
    int a, b;

    for(a = 1; a <=5; a ++)
    {
        for(b = 1; b<=a; b++)
        {
            if(b%2==1)
            {
            printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 1;
}

int task19()
{
    int a, b, c = 1;

    for(a = 1; a <=5; a ++)
    {
        for(b = 1; b <= a; b ++)
        {
            printf("%d", c++);
        }
        printf("\n");
    }
    return 1;
}

int task20()
{
    int a, b;

    for(a = 5; a>=1; a--)
    {
        for(b = a; b <= 5; b++)
        {
            if(b%2==1)
            {
                printf("- ");
            }
            else
            {
            printf("| ");
            }
        }
        printf("\n");
    }
   return 1;
}

int task21()
{
    char c, d;

    for(c = 'A'; c <='E'; c++ )
    {
        for(d = 'A'; d <=c; d++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    return 1;
}

int task22()
{
    char e, f, g = 'A';

    for(e = 'A'; e <='E'; e++ )
    {
        for(f = 'A'; f <=e; f++)
        {
            printf("%c", g++);
        }
        printf("\n");
    }
    return 1;
}
