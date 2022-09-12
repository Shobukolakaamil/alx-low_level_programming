#include <stdio.h>

/**
 * main - Printing all possible combination of single digit numbers
 *
 * Description: using the main function
 * this program prints "Single digit numbers
 * Return: 0
 */
int main(void)

{
	int h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar (h);
		if (h != '9')
		{
			putchar (',');
			putchar (' ');
		}
	}
}
