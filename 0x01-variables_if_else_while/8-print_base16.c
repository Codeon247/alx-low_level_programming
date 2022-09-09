#include <stdio.h>

/**
 *  * main -  prints all the numbers of base 16 in lowercase, followed a new line
 *   *
 *    * Description: All your code should be in the main function
 *     *
 *      * Return: 0 Always success
 *       */
int main(void)
{
		int num;
			char alpha;

				for (num = 0; num < 10; num++)
							putchar((num % 10) + '0');

					for (alpha = 'a'; alpha <= 'f'; alpha++)
								putchar(alpha);

						putchar('\n');

							return (0);
}
