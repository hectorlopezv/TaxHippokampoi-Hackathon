#include "clients.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int is_empty()
{
	return (0);

}

void pop()
{
	return;

}
void push(char *name, unsigned int cellphone, char *destiny,
		unsigned int number_taxis, unsigned int trunk_or_not)
{


	Client *new_taxi = malloc(sizeof(Client));
	if (new_taxi == NULL)
	{
		return;
	}
	new_taxi->name = strdup(name);
	new_taxi->Celphone = cellphone;
	new_taxi->destiny = strdup(destiny);
	new_taxi->Number_taxis = number_taxis;
	new_taxi->trunk = trunk_or_not;
	new_taxi->next = NULL;
}

