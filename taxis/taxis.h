#ifndef TAXIS_H
#define TAXIS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _taxi {
	char *driver;
	char *number;
	char *brand;
	char *model;
	char *status;
	short trunk;
	unsigned short cuit;
	unsigned short year;
} taxi;

taxi *create_taxi(char *driver, char *number, char *brand, char *model,
		char *status, short trunk, unsigned short cuit, unsigned short year);
taxi *add_taxi(taxi **list);
taxi *delete_taxi(taxi **list, unsigned int index);
int numbers_taxi(taxi *list);


/* utils */
char *allocate_string(char *str, char *dest);
void *free_taxi(taxi *_taxi);

#endif