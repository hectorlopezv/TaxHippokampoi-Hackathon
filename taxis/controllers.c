#include "taxis.h"

taxi *create_taxi(char *driver, char *number, char *brand, char *model,
		char *status, short trunk, unsigned short cuit, unsigned short year)
{
    taxi *new;
    int len;

    new = malloc(sizeof(taxi));
    if (new == NULL)
        return (NULL);

    new->driver = allocate_string(driver, new->driver);
    if (new->driver == NULL)
        return (free_taxi(new));

    new->number = allocate_string(driver, new->number);
    if (new->number == NULL)
        return (free_taxi(new));

    new->brand = allocate_string(driver, new->brand);
    if (new->brand == NULL)
        return (free_taxi(new));

    new->model = allocate_string(driver, new->model);
    if (new->model == NULL)
        return (free_taxi(new));

    new->status = allocate_string(driver, new->status);
    if (new->status == NULL)
        return (free_taxi(new));

    new->driver = strdup(driver);
    new->status = strdup(status);
    new->number = strdup(number);
    new->brand = strdup(brand);
    new->model = strdup(model);
    new->cuit = cuit;
    new->trunk = trunk;
    new->year = year;
    new->next = NULL;

    return (new);
}

taxi *add_taxi(taxi **list, taxi *new)
{
    if (new == NULL)
     return (NULL);

    if (!*list) {
        *list = new;
    }

    for (; *list != NULL; list = &(*list)->next);

    *list = new;

    return (new);
}

int get_numbers_taxi(taxi *list)
{
    int i;

    for (i = 0; list != NULL; i++, list = list->next);

    return (i);
}