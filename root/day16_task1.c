#include<stdio.h>

main()
{
    int n, i;

    printf("How long you want the array to be : ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        
        printf("Enter the value : \n");
        scanf("%d", &a[i]);
    }

    printf("The values of array are : \n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

}