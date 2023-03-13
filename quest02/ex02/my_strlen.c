#include <stdio.h>

/*
**
** QWASAR.IO -- my_strlrn
**
** @param {char*} s
**
** @return {strlength}
**
*/

size_t my_strlen(const char *s)
{
    int strlength = 0;

    while(*s != '\0')
    {
        strlength++;
        s++;
    }
    return (strlength);
}