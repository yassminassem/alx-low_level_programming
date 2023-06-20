#include "main.h"
/**
* _islower - checks for lowercase character
* @c: the charcter to be checked
*return: 1 if `c` is lowercase charcter
* otherwise always 0 (success)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
