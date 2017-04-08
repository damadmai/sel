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
    for (int i = 10; i >= 0; i--)
    {
        fprintf(fp, "%i ", i);
    }
    fclose(fp);

    return 0;
}
