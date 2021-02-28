#include "holberton.h"

/**
 * _isalpha - Print the alphabet in lowercase.
 * @c: The character in ASCII code
 * Return: 1 for letters. Retun 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
