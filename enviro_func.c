#include "main.h"

/**
 * _getenv - obtener variables ambientales
 * @env_var: variables ambientales
 * Return: resultado de la variable env, su contenido
 */

char *_getenv(char *env_var)
{
	int g = 0, h;
	int state;

	while (environ[g])
	{
		state = 1;

		for (h = 0; environ[g][h] != '='; h++)
		{
			if (environ[g][h] != env_var[h])
				state = 0;
		}
		if (state == 1)
			break;
		g++;
	}
	return (&environ[g][h + 1]);
}

/**
 * _enviro - entorno de impresión
*/
void _enviro(void)
{
	int h = 0;

	while (environ[h])
	{
		printf("%s\n", environ[h]);
		h++;
	}
}
