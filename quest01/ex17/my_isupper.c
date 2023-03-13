#include <stdio.h>

/*
**
** QWASAR.IO -- my_isupper
**
** @param {char} param_1
**
** @return {int}
**
*/

int my_isupper(char param_1)
{
    if ((param_1 > 64) && (param_1 < 91))
    {
        return 1;
    }
    else {
        return 0;
    }
}