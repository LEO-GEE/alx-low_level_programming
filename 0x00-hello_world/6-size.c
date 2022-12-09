#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by Fred
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(int));
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(float))
	return (0);
}
