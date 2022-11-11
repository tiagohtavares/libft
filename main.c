/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:36:21 by ttavares          #+#    #+#             */
/*   Updated: 2022/11/10 17:31:32 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <strings.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"
#include <fcntl.h>

char	a(unsigned int i, char c)
{
	if (i > 3)
	{
		if (c >= 'a' && c <= 'z')
			return (c - 32);
	}
	return (c);
}

int	main(void)
{
	char	testbzero[] = "0123456789";
	char	testmemcpy[] = "0123456789";
	char	testmemmove[] = "0123456789";
	char	testmemset[] = "0123456789";
	char	teststrlcpy[] = "Hello there, Venus";
	char	teststrlcpybuffer[19];
	char	teststrlcat[9] = "This is ";
	char	teststrlcat1[26] = "a potentially long string";
	char	teststrchr[] = "0123456789";


	printf("**********####################TESTING####################********** \n");
	printf("\n");

	printf("####################ft_set...#################### \n");

	printf("\n");

	printf("	Before ft_bzero       -> %s \n",testbzero);
	ft_bzero(testbzero, 5);
	printf("	After ft_bzero        -> %s \n",testbzero);
	printf("\n");
	printf("	Before ft_memcpy      -> %s \n",testmemcpy);
	ft_memcpy((void*)&testmemcpy[5],(void*)&testmemcpy[3], 5);
	printf("	After ft_memcpy       -> %s \n",testmemcpy);
	printf("\n");
	printf("	Before ft_memmove     -> %s \n",testmemmove);
	ft_memmove((void*)&testmemmove[5],(void*)&testmemmove[3], 5);
	printf("	After ft_memmove      -> %s \n",testmemmove);
	printf("\n");
	printf("	Before ft_memset      -> %s \n",testmemset);
	ft_memset((void*)&testmemset[7],48, 3);
	printf("	After ft_memset       -> %s \n",testmemset);
	printf("\n");

	printf("####################ft_is...#################### \n");

	printf("\n");

	printf("	ft_isalnum 3         -> %d \n", ft_isalnum('3'));
	printf("	ft_isalnum +         -> %d \n", ft_isalnum('+'));
	printf("	ft_isalnum z         -> %d \n", ft_isalnum('z'));
	printf("\n");
	printf("	ft_isalpha 3         -> %d \n", ft_isalpha('3'));
	printf("	ft_isalpha +         -> %d \n", ft_isalpha('+'));
	printf("	ft_isalpha z         -> %d \n", ft_isalpha('z'));
	printf("\n");
	printf("	ft_isascii 3         -> %d \n", ft_isascii('3'));
	printf("	ft_isascii +         -> %d \n", ft_isascii('+'));
	printf("	ft_isascii 0x80      -> %d \n", ft_isascii(0x80));
	printf("\n");
	printf("	ft_isdigit 3         -> %d \n", ft_isdigit('3'));
	printf("	ft_isdigit +         -> %d \n", ft_isdigit('+'));
	printf("	ft_isdigit z         -> %d \n", ft_isdigit('z'));
	printf("\n");
	printf("	ft_isprint 3         -> %d \n", ft_isprint('3'));
	printf("	ft_isprint +         -> %d \n", ft_isprint('+'));
	printf("	ft_isprint 128       -> %d \n", ft_isprint(128));
	printf("\n");

	printf("####################ft_to...#################### \n");

	printf("\n");


	printf("	ft_tolower A         -> %c \n", ft_tolower('A'));
	printf("	ft_tolower +         -> %c \n", ft_tolower('+'));
	printf("	ft_tolower Z         -> %c \n", ft_tolower('Z'));
	printf("	ft_toupper a         -> %c \n", ft_toupper('a'));
	printf("	ft_toupper +         -> %c \n", ft_toupper('+'));
	printf("	ft_toupper z         -> %c \n", ft_toupper('z'));

	printf("\n");
	printf("####################ft_str...#################### \n");
	printf("\n");

	printf("	ft_strlen ASD        -> %zu \n", ft_strlen("ASD"));
    printf("	Copied '%s' into '%s', length %zu\n", teststrlcpy, teststrlcpybuffer, ft_strlcpy(teststrlcpybuffer,teststrlcpy,10));
	printf("	Value Returned %lu \n", ft_strlcat(((void*)0), teststrlcat1, 0));
	printf("	String returned:  %s \n", teststrlcat);
	printf("	Searched for 3 in %s and got %s \n", teststrchr, ft_strchr(teststrchr,'\0'));
	/*printf("	Test ft_memchr %p \n", ft_memchr(((void*)0), '\0', 0x20));
	printf("	Test strnstr %s \n", ft_strnstr(((void*)0), "fake", 5));
	printf("	Test ft_toi %d \n",ft_atoi((void*)0));
	printf("	Test atoi %d \n",ft_atoi((void*)0)); */
	char *substrtest = "01234";
	printf("	ft_substr result %s \n" ,ft_substr(substrtest, 2, 1));
	printf("	returned trimmed string |%s| \n" , ft_strtrim("012345","012345"));

	char	**split = ft_split("zabcz", 'z');
		printf("	ft_split  == |%s| ",split[0]);
		printf("	splittest == |%s| \n",splitt[0]);
	printf ("	itoa output %s \n",ft_itoa(5354413));
	printf ("	strampi test == %s \n", ft_strmapi("abcdefgh", &a));
	int	file = open("test.txt", O_WRONLY | O_CREAT , 0777);
	ft_putchar_fd('A', file);

	printf("\n");
	printf("\n");

	printf("**********####################ENDING####################********** \n");
	return (0);
}
