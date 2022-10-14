# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

/**
  * print_numbers - prints numbers followed by a new line
  * @separator: string to be printed between numbers
  * @n: number of intergers passed to the function
  * Description - This is what we do
  */

void print_numbers(const char *separator, unsigned int n, ...)
{
	va_list ag;
	unsigned int i = 0;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ag, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(ag);
	printf("\n");
}

