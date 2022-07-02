#include <stdio.h>

/**
 * main- entry point of program
 * return (0) value indicates success
 */
int main(void)
{
	char alphabet;
	/*program*/
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
