#include <stdio.h>

/**
 *  * main - prints the lowercase alphabet in reverse, followed by a new line
 *   *
 *    * Description: All your code should be in the main function
 *     *
 *      * Return: 0 Always success
 *       */
int main(void)
{
		char alpha;

			for (alpha = 'z'; alpha >= 'a'; alpha--)
						putchar(alpha);

				putchar('\n');

					return (0);
}
