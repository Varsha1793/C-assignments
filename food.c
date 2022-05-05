#include<stdio.h>
main()
{
	int choice;
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{6
		case 1: 
			printf("Food item - Biriyani\nPrice - Rs 250");
			break;
		case 2: 
			printf("Food item - Fried Rice\nPrice - Rs 150");
			break;
		case 3: 
			printf("Food item - Noodles\nPrice - Rs 170");
			break;
		case 4: 
			printf("Food item - Parotta\nPrice - Rs 70");
			break;
		case 5: 
			printf("Food item - Mini meals\nPrice - Rs 200");
			break;
		default:
			printf("Invalid Number");	
	}
}
