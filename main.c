#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[], char* env[])
{
    FILE* fichero;
    fichero = fopen("archivoENV.txt", "wt");
    int i;
    for(i=0; env[i] != NULL; i++){
        fprintf(fichero, "%s\n", env[i]);
    }
    fclose(fichero);
    printf("Proceso completado\n");
    return 0;
}
