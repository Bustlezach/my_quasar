#include <stdio.h>

/*
**
** QWASAR.IO -- my_print_alphabet
**
**
** @return {void}
**
*/

void my_print_alphabet()
{
    int i;

    for(i = 97; i <= 122; i++)
    {
        putchar(i);
    }
    putchar('\n');
}