#include "module_a.h"

int32_t AverageThreeBytes(float a, float b, float c)
{
    float result = (a + b + c) / 3.0;
    return (int32_t)(result + ((result>0)?0.5:((result==0)?0:-0.5)));
}
