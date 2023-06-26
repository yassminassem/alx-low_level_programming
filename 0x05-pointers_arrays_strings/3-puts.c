<<<<<<< HEAD
#include"main.h"
=======
#include "main.h"
>>>>>>> 726a2d8cbed493089819acf3f6e7f693433f4475
/**
*_puts - prints a string
*@str:the string to print
*Return: void
*/
void -puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
