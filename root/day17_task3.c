#include<stdio.h>

main()
{
    int n, i, j, sum = 0;
    float avg;

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

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
        sum = sum + a[i][j];
        }
    }

    printf("The Sum of array is : %d\n", sum);

    avg = sum/n;

    printf("Average of array values is : %.2f\n", avg);

}