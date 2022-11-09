
#include "libft.h"

char *ft_strdup(const char *s)
{
    void    *ptr;

    ptr = malloc(sizeof(char)*ft_strlen(s) + 1);
    if (!ptr)
        return (0);
    ft_strlcpy(ptr,s,ft_strlen(s) + 1);
    return (ptr);
}