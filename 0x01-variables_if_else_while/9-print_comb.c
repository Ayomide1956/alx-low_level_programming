#include <stdio.h>

/**
 * main - prints all possible combination of single-digit numbers.
 * Return: 0;
 */
int main(void)
{
	int i;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar("\n");
	return (0);
}
