#include<stdio.h>
main()
{
	int a,b;
	printf("Enter number1=");
	scanf("%d",&a);
	printf("Enter number2=");
	scanf("%d",&b);
	printf("\nBefore swapping\n\n");
	printf("Number1=%d\nNumber2=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\nAfter swapping\n\n");
	printf("Number1=%d\nNumber2=%d",a,b);
	return 0;
}
