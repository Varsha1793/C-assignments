#include<stdio.h>
main()
{
	int mark;
	printf("Enter your mark:");
	scanf("%d",&mark);
	if(mark<=100&&mark>=85)
	{
		printf("You secured 'GRADE A'");
	}
	else if(mark<=84&&mark>=70)
	{
		printf("You secured 'GRADE B'");	
	}
	else if(mark<=69&&mark>=55)
	{
		printf("You secured 'GRADE C'");	
	}
	else if(mark<=54&&mark>=40)
	{
		printf("You secured 'GRADE D'");	
	}
	else if(mark<40)
	{
		printf("You secured 'GRADE F'");
	}
}
