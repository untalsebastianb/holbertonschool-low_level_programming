#include <stdio.h>
/**
 * main - function main where the programs start
 *
 * Return: return 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if(!(i == 'e' || i== 'q'))		
		putchar(i);
	}
	putchar('\n');
	return (0);
} /* End of the program */
