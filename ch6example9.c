/* chapter-6 example-9
	Sabitha 29,august 2014 */
	
/* Program to evaluate simple expressions */

#include <stdio.h>

int main(void)
{
	float value1;
	float value2;
	char operator;
	
	printf("Type in your expression.\n");
	scanf("%f %c %f", &value1, &operator, &value2);
	
	switch(operator)
	{	
	case '+':
	printf ("%.2f\n", value1 + value2);
	break;
	
	case '-':
	printf ("%.2f\n", value1 - value2);
	break;
	
	case '*':
	printf ("%.2f\n", value1 * value2);
	break;
	
	case '/':
		if ( value2 == 0 )
		printf ("Division by zero.\n");
		
		else
		printf ("%.2f\n", value1 / value2);

	break;

	default:
	printf ("Unknown operator.\n");
	break;
	}

	return 0;
}
