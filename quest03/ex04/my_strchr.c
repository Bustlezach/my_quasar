#include <stdio.h>

/*
**
** QWASAR.IO -- my_strchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/

char* my_strchr(char* param_1, char param_2)
{
	char i = 0;

	while (param_1[i] != '\0')
	{
		if(param_1[i] == param_2)
		{
			return param_1 + i;
		}

		i++;
	}
}