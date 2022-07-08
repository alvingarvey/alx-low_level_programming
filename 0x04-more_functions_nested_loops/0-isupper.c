#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: integer
 * Return: 1 (success) 0 (otherwise)
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
