#include"main.h"
/**
* _Print_sign - prints the sign of a number
* @n: the number to be checked
* Return: 1 for positve num, -1 for negative num or zero for anything else
*/
int _Print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if ( n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
