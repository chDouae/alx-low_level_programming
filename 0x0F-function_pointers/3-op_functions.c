#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  *opp_add- returns the sum of two numbers
  *@a: the first number
  *@b: the second number
  *
  *Return: sum of a and b
  **/
int op_add(int a, int b)
{
	return(a + b);
}
/**
 * op_sub -the difference of two numbers.
 * @a:first number.
 * @b:  second number.
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -  the first number mutiply by the second
 * @a:  first number.
 * @b:  second number.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers.
 * @a:first number.
 * @b:  second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

