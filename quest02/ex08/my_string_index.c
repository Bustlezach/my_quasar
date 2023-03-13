#include <stdio.h>

/*
**
** QWASAR.IO -- my_string_index
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {int}
**
*/

int my_string_index(char* param_1, char param_2)
{
    int len = strlen(param_1);
    int i;
    for (i = 0; i < len; i++)
    {
        if (param_1[i] == param_2)
        {
            return (i);
        }
    }
    return (-1);
}