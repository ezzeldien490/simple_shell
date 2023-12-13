#ifndef SHELL_H
#define SHELL_H

/*LIBRARIES_*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

/*PROTOTYPES_*/
int _strcmp(char *fp, char *sp);
char *_strcpy(char *est, char *sc);
char *search_pathname_func(char *command);
char **_split(char *st, char *sp);
char *_strcat(char *fstr, char *sstr);
int _strlen(char *str);
char *_getenv(char *env_var);
void *_calloc(unsigned int narr, unsigned int size);
void _enviro(void);
int _execute(char **args);
int emty_line(char *buff);

/* GLOBAL VARIABLE*/
extern char **environ;

#endif
