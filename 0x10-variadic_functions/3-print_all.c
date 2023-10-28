#include "variadic_functions.h"

/**
* format_char - format char
* @separator: char
* @args: arg to pointer
*/
void format_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
* format_int - format int
* @separator: sep
* @args: arg to ptr
*/
void format_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
* format_float - f float
* @separator: str
* @args: int
*/
void format_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * format_string - str
 * @separator: ssss
 * @args: gggg
 */

void format_string(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
		printf("%s%s", separator, str);
}


/**
* print_all - is fun
* @format: char
* Return: void
*/

void print_all(const char * const format, ...)
{
int i = 0, j;
char *separator = "";
va_list args;
token_t tokens[] = {
{"c", format_char},
{"i", format_int},
{"f", format_string},
{NULL, NULL}
};

va_start(args, format);
while (format && format[i])
{
	j = 0;
	while (tokens[j].token)
	{
		if (format[i] == tokens[j].token[0])
		{
			tokens[j].f(separator, args);
			separator = ", ";
		}
		j++;
	}
	i++;
}
printf("\n");
va_end(args);
}
