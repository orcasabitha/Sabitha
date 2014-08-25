/* chapter-4 exercise-8
	Sabitha 25,August 2014 */

/* next largest even multiple */

#include <stdio.h>

int main(void)
{
	/* declare variables */
	int i;
	int j;
	int next;

	printf(" Enter the values of i and j:\n");
	scanf("%d%d", &i, &j);

	/* calculation */
	next = i + j - i % j;

	/* display results */
	printf(" The next largest even multiple of %i and %i is %i.\n", i, j, next);

	return 0;
}


