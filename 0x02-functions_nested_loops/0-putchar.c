#include "stdio.h"
/**
 * main - Entry block
 * Description: prints _putchar on new line
 * Return: 0
 */
int main(void)
{
	char c[7] = "putchar";

	int i = 0;

	while (i < 6)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
