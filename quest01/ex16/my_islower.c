#include <stdio.h>

/*
**
** QWASAR.IO -- my_islower
**
** @param {char} param_1
**
** @return {int}
**
*/

int my_islower(char param_1)
{
    if ((param_1 > 96) && (param_1 < 123))
    {
        return 1;
    }
    else {
        return 0;
    }
}