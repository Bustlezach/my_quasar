#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac != 3)
    {
        return 0;
    }
    else
    {
        int a = atoi(av[1]);
        int b = atoi(av[2]);
        int i, j;

        for(int i = 0; i < b; i++)
        {
            //if (i == 0 || i == b - 1) printf("o");
            for(int j = 0; j < a; j++)
            {
                if ((i == 0 && j == a - 1) || (i == b - 1 && j == a - 1) || (i == 0 && j == 0) || (i == b - 1 && j == 0))
                    printf("o");
                else if ((i != 0 && i != b-1 && j != 0 && j != a - 1))
                    printf(" ");
                else if ((i > 0 && j == 0) || (i != b - 1  && j == 0) || (j == a - 1 && i > 0) || (j == a - 1 && i != b - 1))
                    printf("|");
                else
                    printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}
