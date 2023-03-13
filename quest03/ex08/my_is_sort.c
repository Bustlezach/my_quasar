#include <stdio.h>
#include <stdlib.h>
/*
**
** QWASAR.IO -- my_is_sort
**
** @param {integer_array*} param_1
**
** @return {bool}
**
*/
#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


bool my_is_sort(integer_array* param_1)
{
    bool increasing = true, decreasing = true;
    for (int i = 0; i < param_1->size - 1; i++) {
        if (param_1->array[i] > param_1->array[i+1]) {
            increasing = false;
        } else if (param_1->array[i] < param_1->array[i+1]) {
            decreasing = false;
        }
    }
    return increasing || decreasing;
}