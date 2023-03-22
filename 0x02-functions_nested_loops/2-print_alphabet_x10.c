#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabeth in lowercase.
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char chr;
	int x;

	x = 0;

	while (x < 10)
	{
		chr = 'a';
		while (chr <= 'z')
		{
			_putchar(chr);
			chr++;
		}
		_putchar('\n');
		x++;
	}
}
