#include<stdio.h>
void main()
{
int a,b;
int sum, difference, product, modulo;
 float quotient;
 
 printf("Enter First Number: ");
 scanf("%d", &a);
 printf("Enter Second Number: ");
 scanf("%d", &b);
 sum = a+ b;
 difference = a - b;
 product = a * b;
 quotient = (float)a / b;
 modulo = a % b;
 
 printf("\nSum = %d", sum);
 printf("\nDifference = %d", difference);
 printf("\nMultiplication = %d", product);
 printf("\nDivision = %.3f", quotient);
 printf("\nRemainder = %d", modulo);
 

}