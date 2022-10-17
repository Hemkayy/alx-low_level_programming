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
	int num;

	for (num = 0; num < 10; num++)
	putchar(num + '0');
	if (num < 9)
	{
	{
		putchar(',');
	}
	putchar('\n');
	}
	return (0);
}
