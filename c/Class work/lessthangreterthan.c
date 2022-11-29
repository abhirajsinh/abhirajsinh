#include<stdio.h>



void main()

{
	int a,b;
	
	printf("Enter the value A: ");
	scanf("%d",&a);
	
	printf("Enter the value B: ");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("\nA is greterthan B.");
	}
	else if(a<b)
	{
		printf("\nA is lessthan B.");
	}
}