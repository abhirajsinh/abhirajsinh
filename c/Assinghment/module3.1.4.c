#include<stdio.h>
int main()
{
int principal , rate , time, interest;
printf("Enter the principal : ");
scanf("%d",&principal);
printf("Enter the rate : ");
scanf("%d",&rate);

interest = principal*rate*time/100;
return 0;
}