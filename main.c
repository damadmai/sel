#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

int main(int argc, char *argv[])
{
    printf("Anzahl: %i Arg: %s\n", argc, argv[1]);
    uint8_t zahl = atoi(argv[1]);

    printf("Zahl: %i Divsion: %i Rest: %i\n", zahl, zahl / 2, zahl % 2);

    if (zahl != 0)
    {
        printf("nicht null\n");
        if (zahl % 2 == 1)
        {
            printf("ungerade\n");
        }
        else
        {
            printf("gerade\n");
        }
    }

    switch(zahl % 2)
    {
    case 0:
        printf("Null\n");
        break;
    case 1:
        printf("Eins\n");
        break;
    case 2:
        printf("Zwei\n");
        break;
    case 3:
        printf("Drei\n");
        break;
    default:
        printf("Anderes\n");
        break;
    }

    return 0;
}

