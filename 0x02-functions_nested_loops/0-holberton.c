#include "holberton.h"

/**
 * main - Print the word "Holberton"
 *
 * Return: Always0 (success)
 */

int main(void)
{
int i;
char p[] = "Holberton";

for (i = 0; i < 9; i++)
{
_putchar(p[i]);
}
_putchar('\n');
return (0);
}
