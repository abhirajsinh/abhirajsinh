#include<stdio.h>

void work(int a)
{

	printf("\nIn Function A = %d",a);
		

}
void main()
{
	int a;
	printf("\nEnter a value : ");
	scanf("%d",&a);
	work(a);
	
}
