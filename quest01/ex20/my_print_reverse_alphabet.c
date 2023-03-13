#include <stdio.h>

/*
**
** QWASAR.IO -- my_print_reverse_alphabet
**
**
** @return {void}
**
*/

void my_print_reverse_alphabet()
{
    int i;

    for(i = 122; i >= 97; i--)
    {
        putchar(i);
    }
    putchar('\n');
}