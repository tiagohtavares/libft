
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *ptr;

    if(!s1 || !s2 || 
    !(ptr = malloc(sizeof(char)*(ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (0);
    ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
    ft_strlcat(ptr,s2,ft_strlen(s1) + ft_strlen(s2) + 1);
    return(ptr);
}