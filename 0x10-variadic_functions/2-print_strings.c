#include "variadic_functions.h"
/**
* print_strings - is func
* @separator: char ptr
* @n: int
*/

void print_strings(const char *separator, const unsigned int n, ...)
	{
		unsigned int i;
		char *str;
		va_list args;

		va_start(args, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
	{
		printf("%s", (str = va_arg(args, char *)) ? str : "(nil)");
			if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	}
	printf("\n");
	}
