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
	char 1;
	int 4;
	long int 4;
	long long int 8;
	float 4;

	printf("Size of a char: %zu byte(s)", sizeof (char));
	printf("Size of an int: %zu bytes(s)", sizeof (int));
	printf("Size of a long int: %zu byte(s)", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)", sizeof(long long int));
	printf("Size of a float: %zu byte(s)", sizeof(f));
	return (0);
}
