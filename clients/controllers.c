#include "clients.h"


int is_empty(clientes_estacion **estacion_cliente, list_t **rear)
{

	if ((*estacion_cliente)->lista_cliente == NULL  && *rear == NULL)
	{
		return (0);/*vacio*/
	}
	return (1);/* tiene algo*/
}

int number_clients(clientes_estacion **estacion_cliente)
{
	return (*estacion_cliente)->n;/* retorna numeros de clientes*/
}

void pop(clientes_estacion **estacion_cliente, list_t **rear)
{
	list_t *temp;

	temp = (*estacion_cliente)->lista_cliente;

	if ((*estacion_cliente)->lista_cliente == NULL)
	{
		return;
	}

	if ((*estacion_cliente)->lista_cliente == *rear)
	{
		(*estacion_cliente)->lista_cliente = *rear = NULL;
	}
	else
	{
		(*estacion_cliente)->lista_cliente = (*estacion_cliente)->lista_cliente->next;
	}


	(*estacion_cliente)->n -=1;

	free(temp);
}


void print_clients(clientes_estacion *estacion_cliente)
{
	list_t *temp;

	if (estacion_cliente == NULL)
	{
		return;
	}

	temp = estacion_cliente->lista_cliente;

	if (temp == NULL)
	{
		return;
	}


	while (temp != NULL)
	{

		printf("name: %s\n", temp->name);

		printf("cellphone: %d\n", temp->cellphone);

		printf("destiny: %s\n", temp->destiny);

		printf("Number_taxis: %d\n", temp->number_taxis);

		printf("trunk: %d\n", temp->trunk);

		printf("\n");

		temp = temp->next;

	}



}
void push(clientes_estacion **estacion_cliente, list_t **rear ,const char *name, unsigned int cellphone, const char *destiny,
		unsigned int number_taxis, unsigned int trunk_or_not)
{
	list_t *taxi;

	taxi = malloc (sizeof(list_t));

	if (taxi == NULL)
	{
		return;

	}
	taxi->name = strdup(name);
	taxi->cellphone = cellphone;
	taxi->destiny = strdup(destiny);
	taxi->number_taxis = number_taxis;
	taxi->trunk = trunk_or_not;
	taxi->next = NULL;

	if ((*estacion_cliente)->lista_cliente == NULL && *rear == NULL)
	{
		(*estacion_cliente)->lista_cliente = *rear = taxi;
		(*estacion_cliente)->n += 1;
		return;
	}

	(*rear)->next = taxi;
	*rear = taxi;
	(*estacion_cliente)->n += 1;

}

