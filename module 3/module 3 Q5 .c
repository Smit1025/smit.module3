#include<stdio.h>
int main()
{
	int a;
	printf("Enter a year ");
	scanf("%d",&a);
	if('y%400==0 || y%4==0 && y%100!=0')
	{
		printf("Year is Leapyear");
	}
	else
	{
		printf("Year is not Leapyear");
	}
	return 0;
}
