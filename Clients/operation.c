#include "taxi_client.h"

int is_empty(struct clients *front, struct clients *rear)
{
	if (front == NULL  && rear == NULL)
	{
		return (0);
	}
	return (1);
}

void pop(struct clients *front, struct clients *rear)
{

	struct clients *temp= front;

	if (front == NULL)
	{
		return;
	}
	if (front == rear)
	{
		front = rear = NULL;
	}
	else
	{
		front = front->next;
	}
	free(temp);


}



void push(struct clients *front, struct clients *rear ,const char *name, unsigned int cellphone, const char *destiny,
		unsigned int number_taxis, unsigned int trunk_or_not)
{
	struct clients *taxi;

	taxi = malloc (sizeof(struct clients));

	if (taxi == NULL)
	{
		return;
	}
	taxi->name = strdup(name);
	taxi->Celphone = cellphone;
	taxi->destiny = strdup(destiny);
	taxi->Number_taxis = number_taxis;
	taxi->trunk = trunk_or_not;
	taxi->next = NULL;

	if (front == NULL && rear == NULL)
	{
		front = rear = taxi;
		return;
	}

	rear->next = taxi;
	rear = taxi;

}

