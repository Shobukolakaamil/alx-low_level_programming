#include <stdio.h>

/**
 * main - print if the number is positive, zero or negative
 *
 * Description: using main function
 * this program prints "Lower case alphabets in reverse
 * Return: 0
 */
int main(void)

{
		char f;

		for (f = 'z'; f >= 'a'; f--)
		{
			putchar(f);
		}
		putchar('\n');

		return (0);

}
