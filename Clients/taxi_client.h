#ifndef TAXI_CLIENT_H
#define TAXI_CLIENT_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct clients
{
	char *name;
	unsigned int Celphone;
	char *destiny;
	unsigned int Number_taxis;
	unsigned int trunk;
	struct clients *next;
};

int is_empty(struct clients *front, struct clients *rear);

void pop(struct clients *front, struct clients *rear);


void push(struct clients *front, struct clients *rear ,const char *name, unsigned int cellphone, const char *destiny,
		                unsigned int number_taxis, unsigned int trunk_or_not);
#endif
