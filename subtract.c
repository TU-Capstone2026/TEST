#include <stdio.h>
#include "calculator.h"

int subtract(int a, int b)
{
    if(a >= b)
    {
        return a-b;
    }
    return b - a;
}