#include"main.h"
/**
<<<<<<< HEAD
* print_sign - prints the sign of a number
=======
* _Print_sign - prints the sign of a number
>>>>>>> d361f2eff53c0c85ad48765080203b91dafa283e
* @n: the number to be checked
* Return: 1 for positve num, -1 for negative num or zero for anything else
*/
int print_sign(int n);
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
