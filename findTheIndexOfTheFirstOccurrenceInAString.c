int  ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
int strStr(char * haystack, char * needle){
    int i,j,flen,slen;
    i = 0;
    slen = ft_strlen(needle);

    while (haystack[i])
    {
        j = 0;
        if (haystack[i] == needle[j])
        {
            while (needle[j])
            {
                if (haystack[i + j] != needle[j])
                {
                    break;
                }
                j++;
            }
            if (j == ft_strlen(needle))
                return (i);
        }
        i++;
    }
    return (-1);
}