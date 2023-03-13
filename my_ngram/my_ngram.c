#include <stdio.h>
#include <stdlib.h>
#define NUM_CHARS 256

void count_chars(const char *text)
{
    int char_counts[NUM_CHARS] = {0};

    for(int i = 0; text[i] != '\0'; i++)
    {
        char_counts[(int) text[i]]++;
    }

    for (int i = 0; i < NUM_CHARS; i++)
    {
        if(char_counts[i] > 0)
        {
            printf("%c:%d\n", (char) i, char_counts[i]);
        }
    }
}

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        fprintf(stderr, "Usage: %s text [text2, text3]\n", argv[0]);
        exit(1);
    }

    for (int i = 1; i < argc; i++)
    {
        count_chars(argv[i]);
    }

    return 0;
}

