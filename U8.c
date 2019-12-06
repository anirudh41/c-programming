#include<stdio.h>
main()
{
	int n;
	printf("\n enter the value");
	scanf("%d",&n);
	if (n>0)
	{
		printf("%d is positive",n);
	}
	else if (n<0)
	{
		printf("%d is negative",n);
	}
	else
	{
		printf("%d is neither positive nor negative",n);
	}
}
