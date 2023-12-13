#include "main.h"

/**
 * _execute - una función que ejecuta la ruta del comando, +proceso hijo.
 * @args: argumentos
 * Return: terminate state.
 */

int _execute(char **args)
{
	int ld = fork(), state;

	if (ld == 0)
	{
		if (execve(args[0], args, environ) == -1)
			perror("Error");
	}
	else
	{
		wait(&state);
		if (WIFEXITED(state))
			state = WEXITSTATUS(state);
	}

	return (state);
}

