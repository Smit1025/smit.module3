#include<stdio.h>
main()
{
	int i,n;
	int t1=0,t2=1;
	int nextTerm= t1 + t2;
	
	printf("enter the number of terms:");
	scanf("%d",&n);
	
	printf("fibonacci series: %d,%d,",t1,t2);
	
	for (i=3; i<=n; ++i)
	{
		printf("%d,", nextTerm);
		t1=t2;
		t2=nextTerm=t1+t2;
	}
	return 0;
}
