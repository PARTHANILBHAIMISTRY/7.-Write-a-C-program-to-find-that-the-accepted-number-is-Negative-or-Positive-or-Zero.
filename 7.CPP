#include<stdio.h>//write a proogram to find that the accepted number is negative or positive.
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&num);
	if (num>=0)
		printf("%d is a positive number \n",num);
	else
		printf("%d is a negative number \n",num);
	getch();
}