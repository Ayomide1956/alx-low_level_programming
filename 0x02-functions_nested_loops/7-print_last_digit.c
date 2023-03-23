#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @x: is the int to be checked.
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
	x = -x;

	y = x & 10;

	if (y < 0)
		y = -y;
	_putchar (y + '0');

		return (y);
}
