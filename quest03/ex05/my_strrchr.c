#include <stdio.h>
#include <string.h>

/*
**
** QWASAR.IO -- my_strrchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/

char* my_strrchr(char* param_1, char param_2)
{
	int len = strlen(param_1);
	int i;

	for(i = len -1; i >= 0; i--)
	{
		if(param_1[i] == param_2)
		{
			return &param_1[i];
		}
	}
	return NULL;

}