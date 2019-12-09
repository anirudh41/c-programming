#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("\n enter a number");
	scanf("%d",&n);
	printf("\n Factors of %d are ",n);
	for(i=1;i<n;i++)
	{
		if (n%i==0)
		{
			printf("\n%d",i);
			sum=sum+1;
		}
	}
	if (sum==n)
		printf("\n perfect number");
	else
		printf("\n not a perfect number");
}
