#include "libft.h"

void    *ft_calloc(size_t nitems, size_t size)
{
    void    *ptr;

    ptr = malloc(nitems * size);
    if (!ptr)
        return(ptr);
    ft_bzero(ptr,nitems * size);
    return (ptr);
}