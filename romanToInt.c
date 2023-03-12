#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;

    while (str[i])
    {
        i++;
    }
    return (i);
}

int romanToInt(char * s){

    int size ;
    int i;
    int result;

    result = 0;
    i = 0;
    size = ft_strlen(s);

    while(i < size)
    {
        if (s[i] == 'M')
        {
            if(s[i - 1] == 'C')
                result += 800;
            else
                result += 1000;
        }
        else if (s[i] == 'D')
        {
            if (s[i - 1] == 'C')
                result += 300;
            else    
                result += 500;
        }
        else if (s[i] == 'C')
        {
            if (s[i - 1] == 'X')
                result += 80;
            else    
                result += 100;
        }
        else if (s[i] == 'L')
        {
            if (s[i - 1] == 'X')
                result += 30;
            else    
                result += 50;
        }
        else if (s[i] == 'X')
        {
            if (s[i - 1] == 'I')
                result += 8;
            else    
                result += 10;
        }
        else if (s[i] == 'V')
        {
            if (s[i - 1] == 'I')
                result += 3;
            else    
                result += 5;
        }
        else if(s[i] == 'I')
            result += 1;

        i++;
    }

    return (result);
}

int main(void)
{
	char *str;
	str = "MCM";

	printf("%d" , romanToInt(str));
	return (0);
}
