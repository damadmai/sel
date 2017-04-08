#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

void evenodd(int zahl);

int main(int argc, char *argv[])
{
    int i;
    for (i = 10; i >= 0; i--)
    {
        printf("%i ", i)
        evenodd(i);
    }
    printf("%i ", i);
    return 0;
}

void evenodd(int zahl)
{
    if (zahl != 0)
    {
        printf("nicht null ");
        if (zahl % 2 == 1)
        {
            printf("ungerade\n");
        }
        else
        {
            printf("gerade\n");
        }
    }
}
