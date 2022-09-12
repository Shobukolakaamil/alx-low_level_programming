#include <stdio.h>

/**
 * main - print hexadecimal numbers
 *
 * Description: using the main function
 * this program prints numbers in base sixteen
 * Return: 0
 */
int main(void)

{
	int i;
	char ch;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');

	return (0);

}
