
#include "libft.h"

char *  ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    if (!big && len == 0)
    {
        return(0);
    }
    
    if (!little[0])
    {
        return((char*)big);
    }
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        while (big[i] && little[j] && i + j < len && big[i + j] == little[j])
            j++;
        if (!little[j])
        {
            return((char*)(big + i));
        }
        i++;
    }
    return (0);
}