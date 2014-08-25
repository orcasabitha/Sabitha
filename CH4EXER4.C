/* chapter 4 exercise-4
	Sabitha 25,august 2014 */

/* degree fahrenheit to degree celsius */

#include <stdio.h>

int main(void)
{
	int f;
	int c;

	/* getting values */
	printf(" enter the degree fahrenheit value: \n");
	scanf("%i", &f);

	/* calculation */
	c = (f - 32) / 1.8;

	/* displaying results */
	printf("The value of %i in degree celsius is %i.\n", f, c);

	return 0;
}
