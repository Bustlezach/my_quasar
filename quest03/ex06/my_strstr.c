#include <stdio.h>
#include <string.h>

/*
**
** QWASAR.IO -- my_strstr
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

char* my_strstr(char* param_1, char* param_2)
{
	int i, j;
	int ln_1 = strlen(param_1);
	int ln_2 = strlen(param_2);
	int dif = ln_1 - ln_2;


	if(ln_1 < ln_2)
	{
		return NULL;
	}

	if (ln_2 == 0)
	{
		return param_1;
	}

	for (i = 0; i <= dif ; i++)
	{
		for (j = 0; j < ln_2 ; j++)
		{
			if(param_1[i + j] != param_2[j])
			{
				break;
			}
		}
		if(j == ln_2)
		{
			return param_1 + i;
		}

	}
	return NULL;

}