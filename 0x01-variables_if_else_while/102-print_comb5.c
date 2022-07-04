#include <stdio.h>

/**
 * main - Program entry point
 *
 * return: 0 indicates success
 */

int main(void)
{
	int num, i, b, c;

	for (num = 0; num < 10 ; num++)
	{

		for (i = 0; i < 9; i++)
		{

			for (b = 0; b < 10; b++)
			{

				for (c = 0; c < 10; c++)
				{

					putchar(num + '0');
					putchar(i + '0');
					putchar(' ');
					putchar(b + '0');
					putchar(c + '0');
					if (num == 9 && i == 8 && b == 9 && c == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
