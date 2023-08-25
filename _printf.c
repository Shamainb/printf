#include <stdio.h>
#include "main.h"

/**
 * _printf - function that produces output
 * @format:  is a character string
 * Return: characters printed if successful
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	va_list args;

	va_start (arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
#include <stdio.h>
#include "main.h"

/**
 * _printf - function that produces output
 * @format:  is a character string
 * Return: characters printed if successful
 */
int _printf(const char *format, ...)
{
	char *s;
	char c;
        int i;
        int count = 0;
        va_list args;

        va_start (args, format);

        for (i = 0; format[i] != '\0'; i++)
        {
                if (format[i] == '%')
                {
                        i++;
                if (format[i] == 'c')
			c = va_arg(args, int);
		_putchar(c);
		count++;
		}
		else if (format[i] == 's')
		{
			*s = va_arg(args, char *);
			if (s != NULL)
			{
				while (*s != '\0')
				{
					_putchar(*s);
					s++;
					count++;
				}
			}
		}
		else if (format[i]  == '%')
		{
			_putchar('%');
			count++;
                }
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
va_end(args);
return (count);
}
