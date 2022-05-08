#include<stdio.h>
main()
{
	int n;
	int result;
	printf("Enter the number:");
	scanf("%d",&n);
	result=prime_check(n,n/2);
	if(result==1)
	{
		printf("Prime number");	
	}
	else
	{
		printf("Not a Prime number");
	}
}
int prime_check(int a,int b)
{
	if(b==1)
	{
		return 1;
	}
	else
	{
		if(a%b==0)
		{
			return 0;
		}
		else
		{
		return prime_check(a,b-1);
		}
	}
}
