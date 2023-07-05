#include "main.h"
int _sqrt(int n, int i);
/**
* -sqrt_recursion - returns the natural square root of a number
* @n: number to calculate the natural square root
* Return: the natural square root
*/
int _sqrt_recursion(int n)
{
return (_squrt(n, 1));
}
/**
* _sqrt - calculates natural square root
* @n; number to calculate natural square root
* @i: itreate number
*/
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return(_sqrt(n, i + 1));
}
