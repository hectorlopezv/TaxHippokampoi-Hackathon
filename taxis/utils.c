#include "taxis.h"

char *allocate_string(char *str, char *dest)
{
    int len;

    len = strlen(str);
    dest = malloc(len * sizeof(char) + 1);

    return (dest);
}

void *free_taxi(taxi *_taxi)
{
    if (_taxi == NULL)
        return (NULL);

    if (_taxi->driver != NULL)
        free(_taxi->driver);

    if (_taxi->number != NULL)
        free(_taxi->number);

    if (_taxi->brand != NULL)
        free(_taxi->brand);

    if (_taxi->model != NULL)
        free(_taxi->model);

    if (_taxi->status != NULL)
        free(_taxi->status);

    free(_taxi);
    return (NULL);
}
