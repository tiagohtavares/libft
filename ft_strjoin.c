/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:46:36 by ttavares          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/03/30 11:15:46 by ttavares         ###   ########.fr       */
=======
/*   Updated: 2023/03/26 02:18:38 by ttavares         ###   ########.fr       */
>>>>>>> 116652ca5d74d441d8c31f3aaa3ad55c5cd37682
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;

<<<<<<< HEAD
	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
=======
>>>>>>> 116652ca5d74d441d8c31f3aaa3ad55c5cd37682
	if (!s1 || !s2)
		return (0);
	ptr = malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	ft_strlcat(ptr, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	free (s1);
	return (ptr);
}
