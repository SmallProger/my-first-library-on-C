/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:16:52 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/07 20:16:52 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	q;
	size_t	length_dst;
	size_t	length_src;

	length_dst = ft_strlen(dst);
	length_src = ft_strlen(src);
	i = length_dst;
	q = 0;
	if (length_dst < size - 1 && size > 0)
	{
		while (src[q] != '\0' && length_dst + q < size - 1)
			dst[i++] = src[q++];
		dst[i] = 0;
	}
	else if (length_dst >= size)
		length_dst = size;
	return (length_dst + length_src);
}
