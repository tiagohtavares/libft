/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:36:52 by ttavares          #+#    #+#             */
/*   Updated: 2022/11/03 15:16:18 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#ifndef LIBFT_H
# define LIBFT_H

size_t ft_strlen(const char *s);
int	ft_toupper(char c);
int	ft_tolower(char c);
int	ft_isalpha(char c);
int	ft_isdigit(char c);
int	ft_isalnum(char c);
int	ft_isascii(int c);
int	ft_isprint(int c);
void	*ft_memset(void *ptr, int value,size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void ft_bzero(void *s, size_t n);

#endif
