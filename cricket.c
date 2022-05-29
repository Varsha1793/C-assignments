#include<stdio.h>
int main()
{
	char password1[10]="123654",password2[10];
	int cmp,choice1,choice2,choice3;
	printf("\n\n\tEnter the password to enter the online portal:");
	scanf("%s",password2);
	cmp=strcmp(password1,password2);
	if(cmp==0)
	{
		printf("\n\n\t\tCorrect password!!");
	}
	else
	{
		printf("\n\n\tInvalid Password");
		printf("\n\tWant to try again if yes press 1 if no press 0:");
		scanf("%d",&choice1);
		if(choice1==1)
		{
			main();
		}
		else
		{
			printf("\n\t\t\tThank you for Visiting");
		}
	}
	return 0;
}
