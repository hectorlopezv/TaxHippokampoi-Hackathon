#ifndef CLIENTS_H
#define CLIENTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct list_s
{
	char *name;
	unsigned int cellphone;
	char *destiny;
	unsigned int number_taxis;
	unsigned int trunk;
	struct list_s *next;
} list_t;



typedef struct clientes
{
	int n;
	list_t *lista_cliente;
} clientes_estacion;

int is_empty(clientes_estacion **estacion_cliente, list_t **rear);
int number_clients(clientes_estacion **estacion_cliente);
void pop(clientes_estacion **estacion_cliente, list_t **rear);
void print_clients(clientes_estacion *estacion_cliente);
void push(clientes_estacion **estacion_cliente, list_t **rear ,const char *name, unsigned int cellphone, const char *destiny,
		                unsigned int number_taxis, unsigned int trunk_or_not);

#endif
