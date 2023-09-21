#include<stdio.h>
main()
{
	int n,i;
    unsigned long long fact = 1;
	printf("enter an integer:");
	scanf("%d",&n);
	
	if (n < 0)
	printf("eroor! factorial of a negative number doesn't exitst,");
	
	else
	{
		for (i=1;i<=n;++i)
		{
			fact *=i;
		}
		printf("factorial of %d = %11u",n,fact);
	}
	return 0;
}
