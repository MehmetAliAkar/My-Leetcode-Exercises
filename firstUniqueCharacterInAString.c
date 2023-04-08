int firstUniqChar(char * s){
    int freq[26] = {0};
    int i=0,j;
    while (s[i])
    {
        j=i+1;
        while(s[j])
        {
            if(s[i]==s[j])
            {
                freq[s[i]]++;
                break;
            }
            j++;
        } 
        if(freq[s[i]]==0)
            return i;
        i++;
    }
    return -1;
}
