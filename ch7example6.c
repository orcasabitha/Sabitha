/* chapter 7 example 6
	Sabitha 2,sep 2014 */
	
/* Introducing Character Arrays */

#include <stdio.h>
int main(void)
{
	char word[] = { 'H', 'e', 'l', 'l', 'o', '!' };
	int i;
	
	for( i = 0; i < 6; ++i )
		printf("%c", word[i]);
	
	printf("\n");
	
	return 0;
}
