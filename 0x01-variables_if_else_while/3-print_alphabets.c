#include <stdio.h>

/**
 *main - Program entry point
 *
 * return : 0 indicates success
 */
int main(void)
{
	char alphabet;
	/*program*/
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
