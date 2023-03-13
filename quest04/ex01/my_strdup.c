#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
**
** QWASAR.IO -- my_strdup
**
** @param {char*} param_1
**
** @return {char*}
**
*/

char* my_strdup(char* param_1)
{
	int len = strlen(param_1);
	char* ptr = malloc(len * sizeof(char));

	if (ptr == NULL) return NULL;
	memcpy(ptr, param_1, len + 1);

	return ptr;
}
