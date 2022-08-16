#include<stdio.h>

int main()
{
    int a, count = 0;

    printf("Enter the Number to count the Digit : ");
    scanf("%d", &a);

    while(a>0)
    {
        a = a/10;
        count++;
    }
     printf("Total Digits are : %d ", count);
    return 0;
}