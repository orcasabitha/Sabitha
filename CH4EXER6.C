/* chapter-4 exercise-6
	Sabitha 25,August 2014 */

/* evaluate polynomial */

#include <stdio.h>

int main(void)
{
	float x=2.55;
	float y;

	y = (3 * x * x * x) - (5 * x * x) + 6;

	printf("the evaluation of polynomial is %f.\n", y);

	return 0;
}
