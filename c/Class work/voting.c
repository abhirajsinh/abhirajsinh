#include<stdio.h>



void main()

{
	int age;
	
	printf("Enter your Age: ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\nYou are Eligeble for voting.");
	}
	else
	{
		printf("\nYou are not Eligeble for voting");
	}
} 