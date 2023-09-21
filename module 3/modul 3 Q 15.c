#include<stdio.h>
int main()

{
	int number,sum = 0;
	printf("enter a number:");
	scanf("%d",&number);
	
	while (number !=0)
	{
		int digit = number %10;
		sum += digit;
		number /10;
	}
	printf("sum of ditits:%d\n",sum);
	
	return 0;
}
