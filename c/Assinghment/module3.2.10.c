#include <stdio.h>
typedef struct
{
 char name[30];
 int id;
 double salary;
}
Employee;
int main()
{
 
 int n=2;
 printf("Enter %d Employee Details \n \n",n);
 for(int i=0; i<n; i++){
 printf("Employee %d:- \n",i+1);
 
 printf("Name: ");
 scanf("%[\n]s");
 
 printf("Id: ");
 scanf("%d");
 printf("Salary: ");
 scanf("%lf");
 
 char ch = getchar();
 printf("\n");
 }
 printf("-------------- All Employees Details ---------------\n");
 for(int i=0; i<n; i++){
 printf("Name \t:%s ");
 scanf("%s \n");
 printf("Id \t:%d ");
scanf("%d \n");
 printf("Salary \t:%f ");
 scanf("%.2lf \n");
 printf("\n");
 }
 return 0;
}