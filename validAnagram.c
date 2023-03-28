bool isAnagram(char * s, char * t){
    int index1[256] = {0};
    int index2[256] = {0};
    int i = 0;
    while (s[i])
    {
        index1[s[i]]++;
        i++;
    }
    i = 0;
    while (t[i])
    {
        index2[t[i]]++;
        i++;
    }
    i = 0;
    while (i < 256)
    {
        if (index1[i] != index2[i])
            return (false);
        i++;
    }
    return true;
}