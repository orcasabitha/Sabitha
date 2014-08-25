/* chapter-4 example-5
	Sabitha 25,August 2014 */

/* converting between integers and float */

#include <stdio.h>

int main(void)
{
	float f1 = 123.125;
	float f2;
	int i1;
	int i2 = -150;

	/* floating to integer conversion */
	i1 = f1;
	printf("%f assigned to an int produces %i\n", f1, i1);

	/* integer to floating conversion */
	f1 = i2;
	printf("%i assigned to a float produces %f\n", i2, f1);

	/* integer divided by integer */
	f1 = i2 / 100;
	printf("%i divided by 100 produces %f\n", i2, f1);

	/* integer divided by float */
	f2 = i2 / 100.0;
	printf("%i divided by 100.0 produces %f\n", i2, f2);

	/* type cast operator */
	f2 = (float) i2 / 100;
	printf("(float) %i divided by 100 produces %f\n", i2, f2);

	return 0;
}


