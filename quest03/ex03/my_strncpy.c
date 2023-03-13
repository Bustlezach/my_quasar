#include <stdio.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- my_strncpy
**
** @param {char*} param_1
** @param {char*} param_2
** @param {int} param_3
**
** @return {char*}
**
*/

char* my_strncpy(char* param_1, char* param_2, int param_3)
{
	char i;

	//param_1 = malloc(sizeof(param_1));

	for (i = 0; (param_2[i] != '\0') && (i < param_3); i++)
	{
		param_1[i] = param_2[i];
	}

	param_1[i] = '\0';
	return (param_1);
}