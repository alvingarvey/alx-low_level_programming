#include <stdio.h>


/**
*main -> Write a program that prints the alphabet in lowercase,
*followed by a new line
*Return value : 0
*/
int main(void)
{


	int ch;

	for (ch = 97; ch <= 122; ch++)

		putchar(ch);

	putchar("\n");

	return (0);
}
