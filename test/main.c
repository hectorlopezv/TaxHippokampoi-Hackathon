#include "taxi-handler.h"

int main()
{
    taxi *taxis;
    new_taxi(&taxis, "hello", "12", "123", "123", "123", 1, 0, 0);
    printf("%p model\n", taxis);
}