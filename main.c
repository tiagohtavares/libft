/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:36:21 by ttavares          #+#    #+#             */
/*   Updated: 2022/11/03 15:59:24 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <strings.h>
#include <string.h>

int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	char str1[15] = "0123456789";
	const char src2[50] = "http://www.tutorialspoint.com";
	char dest[50] = "0123456789";
	ft_memset(str, '.', 32*sizeof(char));
	ft_bzero(str1,5);
	char str2[15] = "0123456789";
	bzero(str2,5);
	int len = ft_strlen("ASD");
	printf("ft_strlen  : ASD  -> %d \n", len);
	printf("ft_strlen  : ASD  -> %ld \n", ft_strlen("ASD"));
	printf("ft_toupper : A    -> %c \n", ft_toupper('A'));
	printf("ft_tolower : $    -> %c \n", ft_tolower('$'));
	printf("ft_isalpha : $    -> %d \n", ft_isalpha('$'));
	printf("ft_isalpha : ' '  -> %d \n", ft_isalpha(' '));
	printf("ft_isalpha : Z    -> %d \n", ft_isalpha('Z'));
	printf("ft_isdigit : 0    -> %d \n", ft_isdigit('0'));
	printf("ft_isdigit : Z    -> %d \n", ft_isdigit('Z'));
	printf("ft_isalnum : Z    -> %d \n", ft_isalnum('Z'));
	printf("ft_isalnum : ' '  -> %d \n", ft_isalnum(' '));
	printf("ft_isalnum : 4    -> %d \n", ft_isalnum('4'));
	printf("ft_isascii : 4    -> %d \n", ft_isascii('4'));
	printf("ft_isascii : 0x80 -> %d \n", ft_isascii(0x80));
	printf("ft_isascii : 12   -> %d \n", ft_isprint(12));
	printf("ft_isascii : B    -> %d \n",    ft_isascii('B'));
	printf("ft_memset -       -> %s \n", str);
	printf("ft_bzero -       -> %s \n", str1);
	int	i = 0;
	while (i < 20)
	{
		printf("%c", str1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 20)
	{
		printf("%c", str2[i]);
		i++;
	}
	printf("\n");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src2, 5);
	printf("After memcpy dest = %s\n", dest);
	printf("memcpy null test = %p \n", ft_memcpy(NULL,NULL,5));
}
