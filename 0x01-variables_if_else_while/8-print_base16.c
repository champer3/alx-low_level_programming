#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
int numbers;

for (numbers = 0; numbers < 10; numbers++)
putchar(numbers + '0');

for (numbers = 'a'; numbers <= 'f'; numbers++)
putchar(numbers);

putchar('\n');

return (0);
}
