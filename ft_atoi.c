#include "libft.h"
#include <stdio.h>
int ft_atoi(const char *str)
{
    int i;
    int signal;
    int res;

    i = 0;
    signal = 1;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
        i++;
    if (str[i] == '-')
    {
        signal = -1;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        i++;
    }
    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * signal);
    
}
    
