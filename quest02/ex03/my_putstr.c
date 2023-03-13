#include <stdio.h>

/*
**
** QWASAR.IO -- my_putstr
**
** @param {char*} param_1
**
** @return {void}
**
*/

void my_putstr(char* param_1)
{
	int i = 0;

	while(*param_1 != '\0')
	{
		putchar(param_1[i]);
		param_1++;
	}
}