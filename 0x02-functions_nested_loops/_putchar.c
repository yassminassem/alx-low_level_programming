#include<unitsd>
/**
*_putchar.c - writes the character c to stdout
* @c: the character to print
* Return: On success 1.
*On error, -1 is returned, and error is set appropriately.
*/
int _putchar.c(char c)
{
return (write(1, &c, 1));
}
