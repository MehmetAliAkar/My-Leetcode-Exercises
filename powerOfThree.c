#include <math.h>
bool isPowerOfThree(int n)
{
    int i;
    i = 0;

    if (n == 0)
        return (false);
    if (n == 2147483647)
        return (false);
    while (i * i * i <= n )
    {
        if (pow(3 , i) == n)
            return (true);
        i++;
    }
    return (false);
}