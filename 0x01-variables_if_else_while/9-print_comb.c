#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Description:All your code should be in the main function
 *
 * Return: 0 Always success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
