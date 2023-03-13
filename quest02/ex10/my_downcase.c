#include <stdio.h>

/*
**
** QWASAR.IO -- my_downcase
**
** @param {char*} param_1
**
** @return {char*}
**
*/

char* my_downcase(char* param_1)
{
	int i;
	int len = strlen(param_1);


	for(i = 0; i < len; i++)
	{
		if((param_1[i] >= 'A') && (param_1[i] <= 'Z'))
		{
			param_1[i] = param_1[i] + 32;
		}
		else
		{
			param_1[i];
		}
	}
    return param_1;

}