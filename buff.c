#include "main.h"

/**
 * _buff - a function that prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: number of bytes printed.
 */
int _buff(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
