#include <stdio.h>
#include <stdlib.h>


/*
**
** QWASAR.IO -- my_range
**
** @param {int} param_1
** @param {int} param_2
**
** @return {int*}
**
*/

int* my_range(int param_1, int param_2)
{
    int size = param_2 - param_1;

	int* ptr = malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
	{
		ptr[i] = param_1 + i;
	}
	return ptr;
}