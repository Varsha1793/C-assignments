#include<stdio.h>
main()
{
	int array[3][3];
	int i,j,sum=0;
	printf("Enter the elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",array[i][j]);
		}
		printf("\n\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum+=array[i][j];
			}
		}
	}
	printf("Sum of diagonal elements = %d",sum);
}
