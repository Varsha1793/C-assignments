#include<stdio.h>
int LCM(int max,int a,int b)
{
	if(max%a==0 && max%b==0)
	{
		return max;
	}
	else
	{
		return LCM(max+1,a,b);
	}
}
main()
{
	int num1,num2;
	printf("First number:");
	scanf("%d",&num1);
	printf("Second number:");
	scanf("%d",&num2);
	int maximum=num1>num2?num1:num2;
	int result=LCM(maximum,num1,num2);
	printf("%d",result);
}
