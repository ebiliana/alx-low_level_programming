#include<stdio.h>

/**
 * main -entry
 *
 * Description: program tocheck size
 *
 * Return: will return number
 */

int main(void)
{
	int a;

	char b;

	float c;

	double d;

	printf("The size of an in is: %lu.\n", (unsigned long)sizeof(a));
	printf("Size of a char: %lu.\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of a double: %lu.\n", (unsigned long)sizeof(d));
	return (0);
}
