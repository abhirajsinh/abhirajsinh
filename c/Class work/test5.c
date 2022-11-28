#include<stdio.h>

void main()

{
	int age;
	char name[20];
	float salary;
	
	printf("\n Enter your name : ");
	//scanf("%s",&name);
	gets(name);
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your salary: ");
	scanf("%f",&salary);
	
	printf("\n Name is :%s",name);
	printf("\n Age is : %d",age);
	printf("\n Salary is: %f",salary);
	
}