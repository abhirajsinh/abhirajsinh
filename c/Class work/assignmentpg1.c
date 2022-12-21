#include<stdio.h>
#include<math.h>

void main()
{
	int choice;
	printf("Enter value to find area of circle");
	printf("\nEnter value to find ractangle");
	printf("\nenter the value to find triangle");
	
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
				float radius,area;
         printf("Enter Radius of Circle");
         scanf("%f",&radius);
         area=(float)3.14159*radius*radius;
         printf("Area of Circle %f",area);
         break;
         }
         case 2:
         	{
         	float len,breadth,area;
         printf("Enter Length and Breadth of Rectangle");
         scanf("%f %f",&len,&breadth);
         area=(float)len*breadth;
         printf("Area of Rectangle is %f",area);
         break;
			 }
			 case 3:
			 	{
			 		 int a,b,c;
         float s,area;
		printf("Enter sides of triangle");
         scanf("%d%d %d",&a,&b,&c);
         s=(float)(a+b+c)/2;
         area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
         printf("Area of Triangle is %f",area);
         break;
         
			}
			default: {
         printf("Invalid Choice");
         break;
     }
	}
}