#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter the values");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && b==c)
	printf("all the given values are equal");
	else if (a>b && a>c)
	printf("\n %d is greater than the other two",a);
    else if (b>c)
    printf("\n %d is greater than the other two",b);
    else 
    printf("\n %d is greater than the other two",c);
    
}
