#include"holberton.h"
/**
 * string_toupper - reverses the content of an array of integers.
 * @a: pointer char parameter destination
 * @n: source char pointer parameter
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			char temp;
			temp = n[i];
			n[i] = temp - 32;
		}
		i++;	
	}
	return (n);
}
