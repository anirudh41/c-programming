#include<stdio.h>
main()
{
	int a;
	printf("enter the value");
	scanf("%d",&a);
	if (a>=0 && a<10)
	printf("\n the given number is a single digit number");
	if (a>9 && a<100)
	printf("\n the given number is a double digit numner");
	if (a>99 && a<1000)
	printf("\n the given number is a three digit number");
	if (a>999)
	printf("\n the given number is a four digit number");
}
