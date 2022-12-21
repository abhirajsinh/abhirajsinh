#include<stdio.h>

void add()
{
	int a=10,b=20;
	printf("\nAddition : %d",(a+b));
		

}
void sub()
{
	int a=10,b=20;
	printf("\nsubtraction : %d",(a-b));
	
}
void div()
{
	int a=10,b=20;
	printf("\nDivition : %.2f",((float)a/b));
	
}
void mul()
{
	int a=10,b=20;
	printf("\nMultiplication : %d",(a*b));
}


void main()
{
	add();
	sub();
	mul();
	div();
}