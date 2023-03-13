#include <stdio.h>

/*
**
** QWASAR.IO -- my_abs
**
** @param {int} param_1
**
** @return {int}
**
*/

int my_abs(int param_1)
{
    if (param_1 < 0)
    {
        return param_1 * (-1);
    }
    else {
        return param_1;
    }
}