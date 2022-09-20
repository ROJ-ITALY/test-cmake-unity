#include "module_a.h"

int8_t AverageThreeBytes(int8_t a, int8_t b, int8_t c)
{
    float sum = (float)a + (float)b + (float)c;
    return (int8_t)((sum + (sum>0?0.5:((sum==0)?0:-0.5))) / 3.0);
}
