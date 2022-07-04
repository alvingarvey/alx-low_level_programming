#include <stdio.h>

/**
 * main - Program entry point
 *
 * return: 0 indicates success
 */
int main(void)
{
	int num, i, a;

	for (num = 0; num < 8; num++)
	{
		for (i = num + 1; i < 9; i++)
		{
			for (a = i + 1; i < 10; a++)
			{
				putchar(num + '0');
				putchar(i + '0');
				putchar(a + '0');
				if (num == 7 && i == 8 && a == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
