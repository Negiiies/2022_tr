int stu_strchr(const char *str, char search)
{
    int i;
    i = 0;
    while(str[i] != '\0'){
        if (str[i] == '\\' && str[i + 1] == 'n'){
            return 0;
        } else if (str[i] == search) {
            return 1;
        }
        i += 1;
    }
    return 0;
}
