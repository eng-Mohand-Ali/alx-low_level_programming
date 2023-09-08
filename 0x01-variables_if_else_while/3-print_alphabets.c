#include <stdio.h>

/**
  * main - main function
  * Return: 0 on success
  */
int main(void)
{
	char loweralpha;
	char upperalpha;

	loweralpha = 'a';
	while (loweralpha <= 'z')
	{
		putchar(loweralpha);
		loweralpha++;
	}
	upperalpha = 'A';
	while (upperalpha <= 'Z')
	{
		putchar(upperalpha);
		upperalpha++;
	}

	putchar('\n');

	return (0);
}
