#include<stdio.h>
main()
{
	int choice;
	/*printf
	1 to finf are of circle
	2 for finding area of rectangle
	3 for finding area tringle");
	scaf("%d",&choice);
	*/
	float radius,area;
		float len,breadth;
			int a,b,c;
			float s;
	printf("enter the choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
			
			printf("Enter Radius of circle");
			scanf("%f",&radius);
			area=(float)3.14*radius;
			printf("Area of circle %f",area);
			break;
		
		case 2:
		
			printf("Enter Length and Breadth of Rectangle");
			scanf("%f %f",&len,&breadth);
			area=(float)len*breadth;
			printf("Area of Rectangle is %f",area);
			break;
		
		case 3:
		
			printf("Enter sides of triangle");
			scanf("%d%d %d",&a,&b,&c);
			s=(float)(a+b+c)/2;
			area=(float)(sqet(s*(s-a)*(s-b)*(s-c)));
			printf("Area of Triangle is %f",area);
			break;
		
	}
}
