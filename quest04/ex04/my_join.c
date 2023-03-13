#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- my_join
**
** @param {string_array*} param_1
** @param {char*} param_2
**
** @return {char*}
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


char* my_join(string_array* param_1, char* param_2)
{
    int c = param_1->size;
    if (c <= 0) return NULL;

    int element_len = 0;
    int new_len;

    for (int i = 0; i < c; i++) {
        element_len += strlen(param_1->array[i]);
    }

    new_len = element_len + ((c - 1) * strlen(param_2));
    char* new_str = malloc(sizeof(char) * (new_len + 1));

    strcpy(new_str, param_1->array[0]);
    for (int i = 1; i < c; i++) {
        strcat(new_str, param_2);
        strcat(new_str, param_1->array[i]);
    }

    free(param_1->array);
    free(param_1);
    return new_str;
}
