#include<Stdio.h>
main()
{
	int i,n,count=0;
	printf("\n enter the value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	       printf("\n prime number");
   else
        printf("\n not a prime number");
}
