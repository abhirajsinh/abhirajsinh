#include<stdio.h>
void main()
{
int i;
int a[10]={1,2,3,4,5,6,7,8,9,10};
int num, odd_sum = 0, even_sum = 0;
printf("Enter the value of num\n");
scanf("%d", &num);
for(i=0;i<10;i++)
{
printf("\n%d\t",a[i]);
}
for (i = 1; i <= num; i++)
{
if (i % 2 == 0)
even_sum = even_sum + i;
else
odd_sum = odd_sum + i;
}
printf("Sum of all odd numbers = %d\n", odd_sum);
printf("Sum of all even numbers = %d\n", even_sum);
}