#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- reverse_string
**
** @param {char*} param_1
**
** @return {char*}
**
*/

char* reverse_string(char* param_1)
{
    int i = 0, len;
    char* ptr;
    ptr = (char*)malloc(sizeof(ptr));

    len = strlen(param_1) - 1;

    while (len >= 0)
    {
	ptr[i] = param_1[len];

	i++;
	len--;
    }

    return (ptr);
}