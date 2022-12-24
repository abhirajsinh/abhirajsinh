#include<stdio.h>

union Employee
{
	int eid;
	char ename[10];
	float esal;
	
};
void main()

{
	union Employee emp;
	printf("\nEnter Id : ");
	scanf("%d",&emp.eid);
	printf("Id : %d",emp.eid);
	
	printf("\n\nEnter Name : ");
	scanf("%s",&emp.ename);
	printf("\nName : %s",emp.ename);
	
	printf("\n\nEnter Salary: ");
	scanf("%f",&emp.esal);
	printf("\nSalary : %.2f",emp.esal);
	
	
	
}