#include<stdio.h>

main()
{
    int n, i, sum = 0;

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

    printf("The Sum of 1st array is : %d\n\n", sum);

    int b[n];

    for(i = 0; i < n; i++)
    {
        
        b[i] = sum;
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + b[i];
    }

    printf("Proof that the 1st array sum is stored in the 2nd array! \n\n");
    printf("The sum of sum of 1st array %d times is : %d", n+1, sum);

}