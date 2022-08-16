#include<stdio.h>

main(){
	
	int n;
	printf("Enter the array =");
	scanf("%d",&n);
	
	int a[n][n], i, j;

	printf("1 elments of array \n");
	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
		scanf("%d",&a[i][j]);
        }
	}
	
	int b[n][n];
		printf("2 elments of array \n");
			for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
			        scanf("%d",&b[i][j]);
                }
	        }
	
	
	int sum;

	printf("\n\n3 Array sum =\n");
	for(i=0;i<n;i++)
    {	
        for(j=0;j<n;j++)
        {
		sum=b[i][j]+a[i][j];
		printf("%d\n",sum);
        }
        
	}	
    
}
