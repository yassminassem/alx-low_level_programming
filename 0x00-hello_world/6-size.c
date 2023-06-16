#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizaof to print the size of various types.
 *
 * Return: Always 0 (success)
 */
int main(void) 
{
printf("siza of a char: %1u byte(s)\n",sizeof(char));
printf("siza of an int : %1u byte(s)\n",sizeof(int));
printf("siza of a long int : %1u byte(s)\n",sizeof(long int));
printf("siza of a long long int : %1u byte(s)\n",sizeof(long long int));
printf("siza of a float : %1u byte(s)\n",sizeof(float));
return (0);
}
