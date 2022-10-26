int stu_strchr(const char *str, char search)
{
    int i;
    i = 0;
    while(str[i] != '\0'){
        if (str[i] == search) {
            return 1;
        }
        i += 1;
    }
    return 0;
}
