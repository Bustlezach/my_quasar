#include <stdio.h>

int main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		FILE *file = fopen(argv[i], "r");
		if (file == NULL)
		{
			fprintf(stderr, "cat: %s: No such file or directory\n", argv[i]);
			continue;
		}
        int c = getc(file);
        while (c != EOF)
        {
            putchar(c);
            c = getc(file);
        }

        fclose(file);
	}
	return 0;
}
