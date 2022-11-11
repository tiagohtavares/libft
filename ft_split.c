/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:48:00 by ttavares          #+#    #+#             */
/*   Updated: 2022/11/10 18:06:19 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordnbr(const char *s, char c)
{
	int words;
	int i;

	words = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			words++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	char	**ptr;
	size_t	i;
	size_t	j;

	if (!s || !(ptr = malloc((ft_wordnbr(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			ptr[j] = malloc((i - start + 1) * sizeof(char));
			ft_strlcpy(ptr[j], s + start, i - start + 1);
			start = -1;
			j++;
		}
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}
