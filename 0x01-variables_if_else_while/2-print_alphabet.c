#include <stdio.h>


/**
*main -> program entry point
*
*Return value : 0 indicates success
*/
int main(void)
{

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
