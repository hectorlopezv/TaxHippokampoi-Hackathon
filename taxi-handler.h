#ifndef TAXI_HANDLER_H
#define TAXI_HANDLER_H

#include "taxis.h"
#include "taxi_client.h"

taxi *new_taxi(taxi **head, char *driver, char *number, char *brand, char *model,
                  char *status, short trunk, unsigned short cuit, unsigned short year);

taxi *add_taxilist(taxi **list);

static taxi *head;

#endif
