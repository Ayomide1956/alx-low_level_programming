#include "main.h"

/**
 * _isalpha - this check for alphabetic character.
 * @c: this is the character that needs to be checked.
 * Return: 1 if c is a letter, 1 otherwise
 */

int _isalpha(int c)
{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
