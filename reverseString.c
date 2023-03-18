void swap(char *c, char *x)
{
    char temp;
    temp = *c;
    *c = *x;
    *x = temp;
}

void reverseString(char* s, int sSize){

    int i;
    int j;

    i = 0;
    j = sSize - 1;
    while (i < j)
    {
        swap(&s[i], &s[j]);
        i++;
        j--;
    }
}