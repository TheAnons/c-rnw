#include<stdio.h>

main()
{
    int n, i, sum = 0;
    float avg;

    printf("How long you want the array to be : ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        
        printf("Enter the value : \n");
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("The Sum of array is : %d\n", sum);

    avg = sum/n;

    printf("Average of array values is : %.2f\n", avg);

}