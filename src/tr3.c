#include <unistd.h>
#include <stdlib.h>
#include "dylan.h"
unsigned int stu_strlen(const char * str);
char *strp(char *buffer, char *find)
{
    int i;
    int y;
    char *s;
    i = 0;
    y = 0;
    s = malloc(sizeof(char) * 100);
    while (buffer[y] != '\0'){
        if (stu_strchr(find, buffer[y]) == 1){
            s[i] = buffer[y] ;
            i += 1;
        }
        y += 1;
    }
    write(1, s, stu_strlen(s));
    write(1,"\n",1);
    free(s);
    return(0);
}

