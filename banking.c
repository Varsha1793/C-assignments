#include<stdio.h>
#include<stdlib.h>
char name[30],address[100],dob[15];
int accNo,balance;
double phoneNo;
int create_acc()
{
	printf("\n\n\t\tEnter details");
	printf("\n\tName:");
	scanf("%s",name);
	printf("\n\tAccount Number:");
	scanf("%d",&accNo);
	printf("\n\tPhone number:");
	scanf("%lf",&phoneNo);
	printf("\n\tAddress:");
	scanf("%s",address);
	printf("\n\tBank Balance:");
	scanf("%d",&balance);
	printf("\n\tDate of Birth:");
	scanf("%s",dob);
}
int view_acc()
{
	printf("\n\tName:%s",name);
	printf("\n\tAccount number:%d",accNo);
	printf("\n\tPhone number:%",phoneNo);
	printf("\n\tAddress:%s",address);
	printf("\n\tBank balance:$%d",balance);
	printf("\n\tDate of Birth:%s",dob);
	return 0;
}
int transaction()
{
	int choice,amount,choice1;
	trans:
	printf("\n\n\t1.Depit\n\t2.Credit");
	printf("\n\tEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n\t\t\tDEPIT");
			printf("\n\tEnter the amount to depit:");
			scanf("%d",&amount);
			balance=balance+amount;
			printf("\n\tAmount depited\n\tBank Balance:%d",balance);
			break;
		case 2:
			printf("\n\t\t\tCREDIT");
			printf("\n\tEnter the amount to credit:");
			scanf("%d",&amount);
			balance=balance-amount;
			printf("\n\tAmount depited\n\tBank Balance:%d",balance);
			break;
		default:
			printf("\n\tInvalid Choice");
					printf("\n\tWant to try again if yes press 1 if no press 0:");
					scanf("%d",&choice1);
					if(choice1==1)
					{
						goto trans;
					}
					else
					{
						printf("\t\t\tThank you for Visiting");
					}
	}
	return 0;
}
int change()
{
	int choice,choice3;
	change:
	printf("\n\n\t1.Name\n\t2.Address\n\t3.Date of birth\n\t4.Phone number");
	printf("\n\tEnter which one to change:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n\tEnter the new name:");
			scanf("%s",name);
			printf("\n\tName Updated");
			printf("\n\tName:%s",name);
			break;
		case 2:
			printf("\n\tEnter the new address:");
			scanf("%s",address);
			printf("\n\tAddress Updated");
			printf("\n\tAddress:%s",address);
			break;
		case 3:
			printf("\n\tEnter the new Date of birth:");
			scanf("%s",dob);
			printf("\n\tDate of Birth Updated");
			printf("\n\tDate of Birth:%s",dob);
			break;
		case 4:
			printf("\n\tEnter the new phone number:");
			scanf("%d",&phoneNo);
			printf("\n\tPhone number Updated");
			printf("\n\tPhone number:%d",phoneNo);
			break;
		default:
			printf("\n\tInvalid Choice");
					printf("\n\tWant to try again if yes press 1 if no press 0:");
					scanf("%d",&choice3);
					if(choice3==1)
					{
						goto change;
					}
					else
					{
						printf("\n\t\t\tThank you for Visiting");
					}
	}	
}
int main()
{
	char password1[10]="123abc",password2[10];
	int cmp,choice1,choice2,choice3;
	printf("\n\n\tEnter the password to enter the online portal:");
	scanf("%s",password2);
	cmp=strcmp(password1,password2);
	if(cmp==0)
	{
		printf("\n\n\t\t\tWelcome to online Banking!!!");
		while(1)
		{
			printf("\n\n\t\t\t\tMENU");
			printf("\n\n\t1.Create new account.\n\t2.View exisiting account");
			printf("\n\t3.Transaction.\n\t4.Change details.\n\t5.Exit the portal");
			printf("\n\n\tEnter your choice:");
			scanf("%d",&choice2);
			switch(choice2)
			{
				case 1:
					create_acc();
					break;
				case 2:
					view_acc();
					break;
				case 3:
					transaction();
					break;
				case 4:
					change();
					break;
				case 5:
					printf("\n\t\t\tThank you for Visiting");
					exit(0);
				default:
					printf("\n\tInvalid Choice");
					printf("\n\tWant to try again if yes press 1 if no press 0:");
					scanf("%d",&choice3);
					if(choice3==1)
					{
						main();
					}
					else
					{
						printf("\n\t\t\tThank you for Visiting");
					}
			}
		}
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
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
