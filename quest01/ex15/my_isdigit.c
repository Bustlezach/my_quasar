#include <stdio.h>

/*
**
** QWASAR.IO -- my_isdigit
**
** @param {char} param_1
**
** @return {int}
**
*/

int my_isdigit(char param_1)
{
    if ((param_1 > 47) && (param_1 < 58))
    {
        return 1;
    }
    else {
        return 0;
    }
}