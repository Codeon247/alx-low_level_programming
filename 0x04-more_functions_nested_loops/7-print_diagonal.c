#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line 
 * @n: input num of lines '\' should br printted
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int co, sp;
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (co = 1; co <= n; co++)
	{
	for (sp = 1; co <= n; co++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
