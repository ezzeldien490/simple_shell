#include "main.h"

/**
 * emty_line - check and find if there exists an emty line.
 * @buff: A line to, buff.
 * Return: for true 0, if not 1, depends on: (int).
 */

int emty_line(char *buff)
{
	int g;

	for (g = 0; buff[g] != '\0'; g++)
	{
		if (buff[g] != ' ')
			return (0);
	}
	return (1);
}
