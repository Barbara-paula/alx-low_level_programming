#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: the charater checked
 * Return 1 for alphabetic characters or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
