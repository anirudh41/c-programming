#include<stdio.h>
main()
{
	int a,r;
	printf("\n enter the value");
	scanf("%d",&a);
	printf("\n reverse number is ");
	while(a>0)
	{
		r=a%10;
		printf("%d",r);
		a=a/10;
	}
}
