#include<stdio.h>

struct Employee
{
	int eid;
	char ename[10];
	float esal;
	
};
void main()

{
	struct Employee emp;
	printf("\nEnter Id : ");
	scanf("%d",&emp.eid);
	printf("\nEnter Name : ");
	scanf("%s",&emp.ename);
	printf("\nEnter Salary: ");
	scanf("%f",&emp.esal);
	
	printf("\n\n===========Datail==========\n\n");
	printf("Id : %d",emp.eid);
	printf("\nName : %s",emp.ename);
	printf("\nSalary : %.2f",emp.esal);
	
}