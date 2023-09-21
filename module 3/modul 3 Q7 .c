#include<stdio.h>
main()

{
	char op;
	double first,second;
	printf("Enter an opreator (+,-,*,/):");
	scanf("%c",&op);
	printf("Eenter two operands: ");
	scanf("%if %if", &first, &second);
	
	switch (op)
	{
		case '+':
			printf("%.1if + %.1if = %.1if",first,second,first-second);
		break;
		case'-':
			printf("%.1if - %.1if = %.1if",first,second,first-second);
		break;
		case'*':
			printf("%.1if * %.1if = %1.if",first,second,first-second);
		break;
		case'/':
			printf("%.1if / %.1if = %1.if",first,second,first-second);
		break;
		default:
			printf("Enter! operator is not correct");
	}
	return 0;
}
