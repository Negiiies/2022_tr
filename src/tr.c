# include <unistd.h>
# include <stdlib.h>
#include "dylan.h"

int main(int argc, char **argv)
{
    if (argc == 3){
        if(argv[1][0] == '-' && argv[1][1] != 'd' && argv[1][1] != 'c'){
            return -1;
        }
        char *buffer = malloc(sizeof(char) * 100);
    if(!buffer){
        return(0);
    }
    int size_read = read(0, buffer, 100);
    if(size_read == -1){
        return(0);
    }
    buffer[size_read] = '\0';
    stri(buffer, argv[1], argv[2]);
            if (stu_strchr(argv[1], '-') == 0){
                stri(buffer, argv[1], argv[2]);
            } else if (stu_strcmp(argv[1], "-d") == 0){
                stry(buffer, argv[2]);
            }
            free(buffer);
    } else {
        return -1;
    }
    return 0;
}
