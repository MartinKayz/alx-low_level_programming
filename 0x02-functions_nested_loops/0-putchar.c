/* prints _putchar follwed by a new line */
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 *
 */
int main(void)
{
	char mar[] = "_putchar";
	
	int i = 0;
	for (i = 0;i < 8; i++)
	{
		_putchar(mar[i]);
	}
	_putchar('\n');
	return (0);
}



