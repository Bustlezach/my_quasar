#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- my_print_words_array
**
** @param {string_array*} param_1
**
** @return {void}
**
*/
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


void my_putstr(char* param_1)
{
	int i = 0;

	while(*param_1 != '\0')
	{
		putchar(param_1[i]);
		param_1++;
	}
}


void my_print_words_array(string_array* param_1)
{
    char* output_str = malloc(sizeof(char) * param_1->size);

    output_str[0] = '\0';

    for (int i = 0; i < param_1->size; i++)
    {
        strcat(output_str, param_1->array[i]);
        strcat(output_str, "\n");
    }

    my_putstr(output_str);

    free(output_str);
}
