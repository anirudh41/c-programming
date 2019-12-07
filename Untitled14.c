#include<stdio.h>
main()
{
	int a,n;
	printf("\n enter the table no:");
	scanf("%d",&n);
	a=1;
	while(a<=20)
	{
		printf("\n %d x %d = %d",n,a,a*n);
		a++;
	}
}
