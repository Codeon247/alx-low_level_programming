nclude <stdio.h>

/**
 *  * main -  prints all possible different combinations of two digits
 *   *
 *    * Description: All your code should be in the main function
 *     *
 *      * Return: 0 Always success
 *       */
int main(void)
{
		int digit1, digit2;

			for (digit1 = 0; digit1 < 9; digit1++)
					{
								for (digit2 = digit1 + 1; digit2 < 10; digit2++)
											{
															putchar((digit1 % 10) + '0');
																		putchar((digit2 % 10) + '0');

																					if (digit1 == 8 && digit2 == 9)
																										continue;

																								putchar(',');
																											putchar(' ');
																													}
									}

				putchar('\n');

					return (0);
}
