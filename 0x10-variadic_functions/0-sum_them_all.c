# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

/**
  * sum_them_all - short description
  * @n: description of n
  * sum: description of sum
  * ag: list of arguments
  * i: counter variable
  * Description: This is what we do
  * Return: Always 0 for success, else non zero
  */


int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list ag;

	if (n)
	{
		va_start(ag, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ag, int);
		}
		va_end(ag);
		return (sum);
	}
	return (0);
}
