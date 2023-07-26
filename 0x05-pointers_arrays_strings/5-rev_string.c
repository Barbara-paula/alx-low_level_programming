#include "main.h"

/**
 * rev_string - reverses adtring
 * @s: input string
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int cunter = 0;
	int l;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[counter];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
