char **fizzBuzz(int n, int *returnSize)
{
    char **ret_arr = (char **)malloc(n * sizeof(char *));

    for (int i = 1; i <= n; i++)
    {
        ret_arr[i-1] = (char*)malloc(20 * sizeof(char));

        if (i % 5 == 0 && i % 3 == 0)
        {
            strcpy(ret_arr[i - 1], "FizzBuzz");
        }
        else if (i % 5 == 0)
        {
            strcpy(ret_arr[i - 1], "Buzz");
        }
        else if (i % 3 == 0)
        {
            strcpy(ret_arr[i - 1], "Fizz"); 
        }
        else
        {
            sprintf(ret_arr[i - 1], "%d", i);
        }
    }

    *returnSize = n;
    return ret_arr;
}
