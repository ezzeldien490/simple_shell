#include "main.h"

/**
 * main - base portaproyectos para prueba Carcasa abierta, base del proyecto.
 * Return: integer.
 */

int main(void)
{
	char *buffer = NULL, **arg;
	size_t readme_size = 0;
	ssize_t buffer_size = 0;
	int exit_state = 0;

	while (1)
	{
		if (isatty(0))
			printf("hsh$ ");

		buffer_size = getline(&buffer, &readme_size, stdin);
		if (buffer_size == -1 || _strcmp("exit\n", buffer) == 0)
		{
			free(buffer);
			break;
		}
		buffer[buffer_size - 1] = '\0';

		if (_strcmp("enviro", buffer) == 0)
		{
			_enviro();
			continue;
		}

		if (emty_line(buffer) == 1)
		{
			exit_state = 0;
			continue;
		}

		arg = _split(buffer, " ");
		arg[0] = search_pathname_func(arg[0]);

		if (arg[0] != NULL)
			exit_state = _execute(arg);
		else
			perror("Error");
		free(arg);
	}
	return (exit_state);
}
