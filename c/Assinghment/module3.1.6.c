 #include<stdio.h>
void main()
{
int days,years;
printf("\nEnter specific days :",days);
scanf("%d",&days);
years=days/365;
printf("\n\nNumber of years is: %d",years);
printf("\nEnter specific years :",years);
scanf("%d",&years);
days=years*365;
printf("\n\nNumber of days is :%d",days);

}
