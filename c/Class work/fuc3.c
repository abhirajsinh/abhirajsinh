#include<stdio.h>

int add(int a,int b)
{
	printf("\nIn function A =%d,B = %d",a,b);
	return a+b;
}

void main()
{
	int res,a,b;
	printf("\n\tEnter value a :");
	scanf("%d",&a);
	printf("\n\tEnter value b :");
	scanf("%d",&b);
	res = add(a,b);
	//printf("%d",add(47+87));
	printf("\n%d",res);
	if(res%2==0)
	{
		printf("\n%d is even",res);
		
	}
	else
	{
		printf("\n%d is odd",res);
	}
}