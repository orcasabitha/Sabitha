/* chapter-6 example-8
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

	if( operator == '+' )
	printf("%.2f\n", value1 + value2);

	else if( operator == '-' )
	printf("%.2f\n", value1 - value2);

	else if( operator == '*' )
	printf("%.2f\n", value1 * value2);

	else if( operator == '/' )
	printf("%.2f\n", value1 / value2);

	return 0;
}
