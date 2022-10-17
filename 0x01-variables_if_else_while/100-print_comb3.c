#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
	for (b = a + 1; b < 10; b++)
	{
		putchar(a + '0');
		putchar(b + '0');
	if (a < 8 || b < 9)
	{
		putchar(',');
	}
	}
	}
	putchar('\n');
	return (0);
}
