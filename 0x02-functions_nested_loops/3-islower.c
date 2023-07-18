#include "main.h"

/**
 * _islower - checks for alphabetic character
 * @c: checks the character
 * Return: 1 for lowercase or else 0
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
