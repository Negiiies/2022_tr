#include <stdio.h>
#include <unistd.h>
unsigned int stu_strlen(const char *str);

char *stri(char *buffer, char *one, char *two)
{
    int i;
    int y;
    y = 0;
    write(1, one, stu_strlen(one));
    write(1, two, stu_strlen(two));
    while (one[y] != '\0')
        {
            i = 0;
            while(buffer[i] != '\0' )
                {
                    if (buffer[i] == one[y])
                        {
                            buffer[i] = two[y];
                        }
                    i += 1;
                }
            y += 1;
            write(1, buffer, stu_strlen(buffer)) ;
        }
    return(0);
}

