
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *ptr;

    ptr = malloc(sizeof(char)*(len + 1));
    if (!ptr || !s)
        return (0);
    if (start >= ft_strlen(s))
    {
        ft_memset(ptr,'\0',len + 1);
        return (ptr);
    }
    ft_strlcpy(ptr,s + start,len + 1);
        return (ptr);
}