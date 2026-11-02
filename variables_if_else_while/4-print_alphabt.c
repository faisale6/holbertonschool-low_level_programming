#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letters;

for (letters = 'a'; letters <= 'z'; letters++)
{
	if (letters != 'e' && letters != 'q')
	{
		putchar(letters);
	}
}
