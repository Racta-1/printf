#include "main.h"

/**
 * _string -a function that writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int _string(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ibuf = handl_buf(buf, str[i], ibuf);
	return (i);
}
