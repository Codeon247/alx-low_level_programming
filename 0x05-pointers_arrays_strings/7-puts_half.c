#include "main.c"

/**
 * puts_half - prints half of A  string
 * @str: the string to be printed
 */
void puts_half(char *str)

{
	int count = 0, i;
	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;
	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
