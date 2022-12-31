#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 *
 * Return: returns the capitalized string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if
			(str[index - l] == ' ' ||
				str[index - l] == '\t' ||
				str[index - l] == '\n' ||
				str[index - l] == ',' ||
				str[index - l] == ';' ||
				str[index - l] == '.' ||
				str[index - l] == '!' ||
				str[index - l] == '?' ||
				str[index - l] ==  '"' ||
				str[index - l] == '(' ||
				str[index - l] == ')' ||
				str[index - l] == '{' ||
				str[index - l] == '}') ||
			str[index] -= 32;
	}
	return (str);
}
