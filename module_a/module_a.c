#include "module_a.h"

int8_t AverageThreeBytes(int8_t a, int8_t b, int8_t c)
{
    return (int8_t)(((float)a + (float)b + (float)c + 0.5) / 3.0);
}
