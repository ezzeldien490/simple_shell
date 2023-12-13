#include "main.h"

/**
 * search_pathname_func - Un archivo de búsqueda entre la ruta.
 * @command: cmd print.
 * Return: cmd, print pathname.
 */

char *search_pathname_func(char *command)
{
	char *pathname = _getenv("PATH"), *pathname_cpy;
	char **pathname_split;
	char *pathname_concat = NULL;
	int g = 0, pathname_len = 0;
	struct stat info;

	if (stat(command, &info) == 0)
		return (command);

	pathname_cpy = malloc(_strlen(pathname) + 1);

	pathname_cpy = _strcpy(pathname_cpy, pathname);
	pathname_split = _split(pathname_cpy, ":");

	while (pathname_split[g])
	{
		pathname_len = _strlen(pathname_split[g]);

		if (pathname_split[g][pathname_len - 1] != '/')
			pathname_concat = _strcat(pathname_split[g], "/");

		pathname_concat = _strcat(pathname_split[g], command);

		if (stat(pathname_concat, &info) == 0)
			break;

		g++;
	}

	free(pathname_cpy);

	if (!pathname_split[g])
	{
		free(pathname_split);
		return (NULL);
	}

	free(pathname_split);
	return (pathname_concat);
}
