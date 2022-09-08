#include <stdio.h>

/**
 * main -  print the string in the put function
 *
 * description; using the main function
 * this programme prints " prints the size of various types on the computer it compiled and runs on.
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof (a));
	printf("Size of an int: %lu bytes(s)",(unsigned long)sizeof (b));
	printf("Size of a long int: %lu byte(s)",(unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)",(unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)",(unsigned long)sizeof(e));
	return (0);
}
