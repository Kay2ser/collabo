#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * @s; char
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
