/* chapter 9 example 1
	Sabitha 15,sep 2014 */
	
/* illustrate  the structure */

#include <stdio.h>

int main(void)
{
	struct date
	{
		int day;
		int month;
		int year;
	};
	
	struct date today;
	
	today.day = 4;
	today.month = 11;
	today.year = 1991;
	
	printf("today's date is %i %i %.2i", today.day, today.month, today.year % 100);
	
	return 0;
}
