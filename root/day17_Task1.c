#include<stdio.h>

main()
{
    int n, i, j;

    printf("How long you want the array to be : ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the value : \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {   
            scanf("%d", &a[i][j]);
        }
    }

    printf("The values of array are : \n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

}