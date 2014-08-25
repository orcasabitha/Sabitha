/* chapter - 4 example-4
	Sabitha 25,August 2014 */

/* modulus operator */

#include <stdio.h>

int main(void)
{
	int a = 25;
	int b = 5;
	int c = 10;
	int d = 7;

	printf("a %% b = %i\n", a % b);
	printf("a %% c = %i\n", a % c);
	printf("a %% d = %i\n", a % d);
	printf("a / d * d + a %% d = %i\n", a / d * d + a % d);

	return 0;
}
