#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    fp = fopen("test.csv", "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Datei nicht geöffnet.\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 10; i > 0; i--)
    {
        for (int j = 1; j <= 10; j++)
        {
            fprintf(fp, "%i; ", i * j);
        }
    }
    fclose(fp);

    return 0;
}
