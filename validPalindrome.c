#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void toLower(char *c){
    int i=0;
    while (c[i])
    {
        if(c[i]>='A' && c[i]<= 'Z')
            c[i]+=32;   
        i++;
    }
}

int ft_strlen(char *s)
{
    int i=0;
    while (s[i])
        i++;
    return i;
}

char *reverseString(char *s)
{
    int len,i = 0; 
    char temp;
    len = ft_strlen(s) - 1;
    while (i <= len )
    {
        temp = s[i];
        s[i]=s[len];
        s[len]=temp;
        i++;
        len--;
    }
    return s;
}

char *wordWithoutSpace(char *s)
{
    int len = ft_strlen(s);
    int i=0,j=0;
    char *c = (char*)malloc(sizeof(char) * (len+1));
    while (s[i])
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            c[j++] = s[i];
        i++;
    }
    c[j]='\0';
    char *ret = (char*)malloc(sizeof(char) * (j+1));
    strcpy(ret,c);
    toLower(ret);
    free(c);
    return ret;
}

bool isPalindrome(char * s){
    char *str = wordWithoutSpace(s);
    char *rev = reverseString(str);

    if(strcmp(str,rev)==0)
    {
        free(rev);
        free(str);
        return true;
    }
    free(str);
    free(rev);
    return false;
}

