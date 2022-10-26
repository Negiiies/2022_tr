#include <stdlib.h>
#include "dylan.h"
#include <unistd.h>
unsigned int stu_strlen(const char *str);
char *stry(char *buffer, char *search)
{
    int i;
    int y;
    char *k;

    i = 0;
    y = 0;
    k = malloc(sizeof(char) * 100);
    while (buffer[y] != '\0'){
        if (stu_strchr(search, buffer[y]) == 0){
            k[i] = buffer[y];
            i += 1;
        }
        y += 1;
    }
    write(1, k, stu_strlen(k));
    free(k);
    return(0);
}
