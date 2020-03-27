#include "taxi-handler.h"

int main()
{
    taxi *taxis;
    taxis = NULL;
    new_taxi(&taxis, "hello", "12", "123", "123", "123", 1, 0, 0);
    printf("%s model\n", taxis->model);
}