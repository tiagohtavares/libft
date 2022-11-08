#include "libft.h"

int ft_strncmp ( const char * str1, const char * str2, size_t num )
{
    size_t  i;

    i = 0;

    while (str1[i] != '\0' && str2[i] != '\0' && i < num)
    {
        if (str1[i] == str2[i])
            i++;
        else
            return ((unsigned char)str1[i] - (unsigned char)str2[i]);
    }
    if (i < num)
        return ((unsigned char)str1[i] - (unsigned char)str2[i]);
    return (0);
}