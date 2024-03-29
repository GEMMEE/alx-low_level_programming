#include "main.h"

/**
 * _pow_recursion - computes the value of x raised to the power of y.
 * @x: the base
 * @y: the exponent
 * Hint: man pow
 *
 * Return: the value of x ^ y
 *         -1 if y is negative
 * Author:  Gamachu AD
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

