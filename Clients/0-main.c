#include  "taxi.h"

int main(void)
{

	list_t *front;
	list_t *rear;

	front = rear = NULL;
	clientes_estacion * clientes;

	clientes = malloc (sizeof(clientes_estacion));

	if (clientes == NULL)
	{
		return (0);
	}

	clientes->n = 0;

	clientes-> lista_cliente = front;


	/* PUSH TAXIS*/

	push(&clientes,&rear, "hector", 320, "buenavista", 1, 0);
	printf("is empty %d\n",is_empty(&clientes,&rear));
	push(&clientes,&rear,"hugo",320,"buenavista",1,0);
	push(&clientes,&rear,"david",320,"buenavista",1,0);
	push(&clientes,&rear,"andres",320,"buenavista",1,0);
	printf("#clientes %d\n", clientes->n);
	pop(&clientes,&rear);
	printf("#clientes %d\n", clientes->n);
	push(&clientes,&rear,"pepe",320,"buenavista",1,1);
	printf("#clientes %d\n", clientes->n);
	print_clients(clientes);



	return(0);
}
