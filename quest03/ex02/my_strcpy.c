#include <stdio.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- my_strcpy
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

char* my_strcpy(char* param_1, char* param_2)
{
    //param_1 = malloc(sizeof(param_1));
	char i;
	for (i = 0; param_2[i] != '\0'; i++)
	{
		param_1[i] = param_2[i];
	}
    param_1[i] = '\0';

    return param_1;
}