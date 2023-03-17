#include <stdio.h>
/**
 * main - This program prints the size of various computer types
 * Return: 0(success)
 */
int main(void)
{
char charType;
int integerType;
long Type;
long long longlongType;
float floatType;
printf("Size of char: %ld bytes\n", (unsigned long)sizeof(charType));
printf("Size of int: %ld bytes\n", (unsigned long)sizeof(intergerType));
printf("Size of long: %ld bytes\n", (unsigned long)sizeof(longType));
printf("Size of long long: %ld byte\n", (unsigned long)sizeof(longlongType));
printf("Size of float: %ld byte\n", (unsigned long)sizeof(floatType));
return (0);
}
