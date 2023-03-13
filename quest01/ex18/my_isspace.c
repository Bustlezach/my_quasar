#include <stdio.h>

/*
**
** QWASAR.IO -- my_isspace
**
** @param {char} param_1
**
** @return {int}
**
*/

int my_isspace(char param_1)
{
    if (param_1 == 32)
    {
        return 1;
    }
    else {
        return 0;
    }
}