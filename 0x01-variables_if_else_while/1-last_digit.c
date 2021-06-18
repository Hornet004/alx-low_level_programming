#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * betty style doc for function main goes there
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char last_digit[] = "Last digit of %d";
	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	} else if (last_digit == 0)
	{
		printf(44"and is 0\n");
	} else if (last_digit < 6 && last_digit != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
