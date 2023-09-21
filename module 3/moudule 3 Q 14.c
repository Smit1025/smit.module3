#include<stdio.h>
main()
{
	int num, maxDigit = 1
	;
	
	printf("enter a number:");
	scanf("%d",&num);
	
	num=(num < 0) ? -num : num;
	
	while (num > 0)
	{
		int digit = num % 10;
		if (digit > maxDigit)
		{
			maxDigit = digit;
		}
		num /=10;
	}
	printf("Max number is %d\n",maxDigit);
	
	return 0;
}
