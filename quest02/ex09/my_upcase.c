#include <stdio.h>

/*
**
** QWASAR.IO -- my_upcase
**
** @param {char*} param_1
**
** @return {char*}
**
*/

char* my_upcase(char* param_1)
{
	int i;
	int len = strlen(param_1);


	for(i = 0; i < len; i++)
	{
		if((param_1[i] >= 'a') && (param_1[i] <= 'z'))
		{
			param_1[i] = param_1[i] - 32;
		}
		else
		{
			param_1[i];
		}
	}
    return param_1;

}