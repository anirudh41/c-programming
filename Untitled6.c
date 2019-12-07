#include<stdio.h>
main()
{
	int a;
	printf("enter the value");
	scanf("%d",&a);
	if ((a%4==0 && a%100!=0 ) || a%400==0)
	printf("\n the given input is a leap year");
	else 
	printf("\n the given input is not a leap year");
}
