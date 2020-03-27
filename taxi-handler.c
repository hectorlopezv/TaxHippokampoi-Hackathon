#include "taxi-handler.h"

taxi *new_taxi(taxi **head, char *driver, char *number, char *brand, char *model,
               char *status, short trunk, unsigned short cuit, unsigned short year)
{
    taxi *new;

    new = create_taxi(driver, number, brand, model, status, trunk, cuit, year);
    if (new == NULL)
    {
        printf("Error for create a new taxi. Try again\n");
        return (NULL);
    }

    return add_taxi(head, new);
}

