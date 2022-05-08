#include<stdio.h>
main()
{
	int n;
	printf("Enter the number with more than 1 digit:");
	scanf("%d",&n);
	int result=sum_of_digits(n);
	printf("%d",result);	
}
int sum_of_digits(int a)
{
	if(a==0)
		return 0;
	return(a%10+sum_of_digits(a/10));	
}
