/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:15:56 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/20 15:15:56 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*reserve_str;
	int				i;
	unsigned char	*char_src;

	i = 0;
	char_src = (unsigned char *) src;
	if (dest == src)
		return (dest);
	else if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		reserve_str = (unsigned char *) malloc(sizeof(char) * n);
		while (i < n && char_src[i])
		{
			reserve_str[i] = char_src[i];
			i++;
		}
		ft_memcpy(dest, reserve_str, n);
	}
	return (dest);
}
