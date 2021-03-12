#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b.
 * @a: integer 1
 * @b: integer 2
 * Return: sum of 2 integers
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: integer 1
 * @b: integer 2
 * Return: difference of 2 integers
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: integer 1
 * @b: integer 2
 * Return: product of 2 integers
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: integer 1
 * @b: integer 2
 * Return: dividend of 2 integers
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: integer 1
 * @b: integer 2
 * Return: remainder of division of 2 integers
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
