#include <stdio.h>

/**
 * main - prints all possible combinations of
 * single-digit numbers.separated by ,
 * followed by a space
 *
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 10 ; n < 20 ; n++)
	{
		putchar(n);
		if (n != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
