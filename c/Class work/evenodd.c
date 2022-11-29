#include<stdio.h>

/*
/ ->Quotient
%-> Reminder
*/

void main()

{
	int a;
	
	printf("Enter the value A: ");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("\n%d is Even No.",a);
	}
	else
	{
		printf("\n%d is Odd No.",a);
	}
}