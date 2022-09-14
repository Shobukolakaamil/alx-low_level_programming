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

	for (h =48; h <=57; h++)
	{
		putchar (h);
		if (h != 57)
		{
			putchar (',');
			putchar (' ');
		}

	}
}
