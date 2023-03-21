#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int ft_strlen(char *s)
{
        int i;
        i = 0;

        while (s[i])
        {
                i++;
        }
        return (i);
}

int     isParantheses(char c)
{
        if (c == 123 || c == '[' || c == '(')
                return (1);
        return (0);
}

bool isValid(char *s)
{	
        int i, top;
        int len = ft_strlen(s);
        char *stack;
        stack = (char*)malloc(sizeof(char) * (len + 1));
        i = 0;
        top = -1;
        if (len % 2 != 0 || s[i] == '\0')
    			  return (false);
        while (s[i]  )
        {
                if (isParantheses(s[i]) == 1)
                {
                        stack[++top] = s[i];
                }
                else if (s[i] == ')' && top >= 0 && stack[top] == '(')
                {
                        top--;
                }
                else if (s[i] == ']' && top >= 0 &&stack[top] == '[')
                {
                        top--;
                }
                else if (s[i] == '}' && top >= 0 &&stack[top] == '{' )
                {
                        top--;
                }
                else
                {
                        free(stack);
                        return (false);
                }
                i++;
        }
        free(stack);
        if (top == -1)
        {
                return (true);
        }
        return (false);
}