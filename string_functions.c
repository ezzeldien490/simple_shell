#include "main.h"

/**
 * _strcmp - Una función estándar conocida que compara dos cadenas.
 * @fp: primer puntero.
 * @sp: Segunda puntero.
 * Return: resultado.
 */

int _strcmp(char *fp, char *sp)
{
	while (*fp && *sp)
	{
		if (*fp != *sp)
			return (*fp - *sp);

		fp++;
		sp++;
	}
	return (0);
}

/**
 * _strcpy - Una función conocida que copia la cadena señalada por la fuente.
 * @est: puntero 2 distribuir.
 * @sc: puntero 2 fuente.
 * Return: @est.
 */
char *_strcpy(char *est, char *sc)
{
	char *g = est;

	while (*sc != '\0')
	{
		*est = *sc;
		est++;
		sc++;
	}
	*est = '\0';
	return (g);
}

/**
 * _split - f 2 cuerda dividida.
 * @st: cadena.
 * @sp: separador.
 * Return: camino dividido.
 */

char **_split(char *st, char *sp)
{
	char *ax, **split_st;
	int g = 0;

	ax = strtok(st, sp);
	split_st = (char **)_calloc(100, sizeof(char *));

	if (!split_st)
	{
		free(split_st);
		return (NULL);
	}

	while (ax)
	{
		split_st[g] = ax;
		ax = strtok(NULL, sp);
		g++;
	}
	return (split_st);
}

/**
 * _strcat - Una función que concatena dos cadenas.
 * @fstr: primera cuerda.
 * @sstr: segunda cuerda.
 * Return: @fstr
 */

char *_strcat(char *fstr, char *sstr)
{
	int g, h;

	for (g = 0; fstr[g] != '\0'; g += 1)
	{}

	for (h = 0; sstr[h] != '\0'; h += 1)
	{
		fstr[g] = sstr[h];
		g++;
	}
	fstr[g] = '\0';
	return (fstr);
}

/**
 * _strlen - longitud de la cuerda.
 * @str: cadena.
 * Return: resultado.
 */

int _strlen(char *str)
{
	int g = 0;

	while (str[g] != '\0')
		g++;

	return (g);
}
