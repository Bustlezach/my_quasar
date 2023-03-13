#include <stdio.h>
#include <stdlib.h>


/*
**
** QWASAR.IO -- my_first_struct
**
** @param {integer_array*} param_1
**
** @return {void}
**
*/

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


void my_first_struct(integer_array* param_1)
{
	int i;

	printf("%d\n", param_1->size );
	for (i = 0; i < param_1->size; i++)
	{
		printf("%d\n", param_1->array[i]);
	}
}
