#include <stdio.h>
/**
 * print_alphabet - prints lowercase alphabet, followed by a new line.
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z'){
	_putchar(c);
	c++;
}
	_putchar('\n');
}
