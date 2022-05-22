#include<stdio.h>
#include<conio.h>
main()
{
	char str1[100],ch[100];
	FILE *f1;
	FILE *f2;
	int i=1;
	f1=fopen("file1.txt","w");
	printf("Enter String:");
	scanf("%s",str1);
	fprintf(f1,str1);
	fclose(f1);
	f1=fopen("file1.txt","r");
	fseek(f1,0,SEEK_END);
	int count=ftell(f1);
	while(i<=count)
	{
		fseek(f1,-i,SEEK_END);
		printf("%c",fgetc(f1));
		i++;	
	}
	f2=fopen("file2.txt","w");
	char c=fgetc(f1);
	while(c!=EOF)
	{
		fputc(c,f2);
		c=fgetc(f1);	
	}
	fclose(f1);
	fclose(f2);	
}
