#include <stdio.h>
#include <unistd.h>
/**
 * main - This is a C program that prints a line to the standard error
 * Description: 'the program's description'
 *
 * Return: 1 (Success)
*/

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
