#include<stdio.h>
/**
 * main - This programme prints size of various types
 * return 0
 */
int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(v));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
/* This is the code.*/
return (0);
}
