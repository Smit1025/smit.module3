#include<stdio.h>
intmain()
{
	int num,firstdigit,lastdigit,sum;

	printf("enter a number:");
	scanf("%d",&num);

	lastdigit = num % 10;
	while (num >=10)
	{
		num /=10;
	}
	firstdigit = num;
	
	sum = firstdigit + lastdigit;
	printf("sum of first and last digit: %d\n",sum);
	
	return 0;	
}
