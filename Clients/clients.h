#ifndef CLIENTS_H
#define CLIENTS_H

#include <string.h>
#include <stdio.h>

typedef struct clients
{
	char *name;
	unsigned int Celphone;
	char *destiny;
	unsigned int Number_taxis;
	unsigned int trunk;
	struct clients *next;
}Client;


#endif
