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

	long int e;
	
	long long int f;

	printf("The size of an in is: %lu byte(s).\n", (unsigned long)sizeof(a));
	printf("Size of a char: %lu byte(s).\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("Size of a double: %lu byte(s).\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	return (0);
}
