#include<stdio.h>
main()
{
	int ndays, year, week, days;
	
	printf("Enter the number of days\n");
	scanf("%d, &ndays");
	year= ndays/365;
	week=(ndays%365)/DAYSINWEEK;
	days=(ndays%365)%DAYSINWEEK;
	printf("%d is eqivalent to %d years, %d week and %d daysn",ndays,year,week,days);
}
