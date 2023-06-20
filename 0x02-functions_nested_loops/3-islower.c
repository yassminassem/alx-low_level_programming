#include "main.h"
/**
* _islower - checks for lowercase character
* @c: the charcter to be checked
*return: 1 for lowercase charcter or 0 for anything else
*/
int_islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
