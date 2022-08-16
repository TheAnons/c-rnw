#include<stdio.h>

 main()
 {
    int i, j, n, DiagonalElements, sum = 0;

    printf("Enter the Array Length : ");
    scanf("%d", &n);

    // Array 1

    int a[n][n];

    printf("Enter Array 1 Values : \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Printing the Matrix

    printf("\n\nThe Matrix is as below \n\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }


    // Finding Diagonal Elements Arrays according to Allocation numbers of the array

    printf("\n\n");
    for(i = 0; i < n; i++)
    {
        int DiagonalElements = 0;
        for(j = 0; j < n; j++)
        {
        	if(i == j)
        	{
        		DiagonalElements += a[i][j];
			}
        }
        
        //Doing the sum of diagonal elements
        
        sum += DiagonalElements;
    }
    
    printf("The sum of Diagonal Elements are : %d ", sum);
 }
