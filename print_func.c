#include "main.h"
/**
 * get_print_func - a function that selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", _char}, {"s", _string},
		{"i", _integer}, {"d", _integer},
		{"b", _binary}, {"u", _unint},
		{"o", _octa}, {"x", _hexa},
		{"X", _upx_}, {"S", _usr_},
		{"p", _add_}, {"li", _linteger},
		{"ld", _linteger}, {"lu", _lunint},
		{"lo", _locta}, {"lx", _lhexa},
		{"lX", _lupx_}, {"hi", _hinteger},
		{"hd", _hinteger}, {"hu", _hunint},
		{"ho", _hocta}, {"hx", _hhexa},
		{"hX", _hupx_}, {"#o", _nocta},
		{"#x", _nhexa}, {"#X", _nupx_},
		{"#i", _integer}, {"#d", _integer},
		{"#u", _unint}, {"+i", _pinteger},
		{"+d", _pinteger}, {"+u", _unint},
		{"+o", _octa}, {"+x", _hexa},
		{"+X", _upx_}, {" i", _sinteger},
		{" d", _sinteger}, {" u", _unint},
		{" o", _octa}, {" x", _hexa},
		{" X", _upx_}, {"R", _rot13},
		{"r", _reverse}, {"%", _prog},
		{"l", _prog}, {"h", _prog},
		{" +i", _pinteger}, {" +d", _pinteger},
		{"+ i", _pinteger}, {"+ d", _pinteger},
		{" %", _prog}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (pr[i].f);
}
