#include<stdio.h>
main()
{
	int a;
	printf("enter the value");
	scanf("%d",&a);
	if (a%5==0 && a%11==0)
	printf("the number is divisible by both 5 and 11");
	else 
	printf("the number is not divisible by 5 and 11");
}
