
#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *ptr;
    unsigned int    i;

    i = 0;
    if (!s || !f)
        return (0);
    ptr = ft_strdup(s);
    if(!ptr)
        return (0);
    while (ptr[i])
    {
        ptr[i] = f(i,ptr[i]);
        i++;
    }
    return (ptr);
    
}