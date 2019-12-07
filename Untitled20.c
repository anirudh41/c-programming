#include<stdio.h>
main()
{
	int a,r,sum=0;
	printf("\n enter the value");
	scanf("%d",&a);
	printf("\n reverse number is ");
	while(a>0)
	{
		r=a%10;
		sum=sum+r;
		a=a/10;
	}
printf("sum of digit %d",sum);
}
