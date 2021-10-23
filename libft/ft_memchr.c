/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:04:39 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/14 18:56:46 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*orig_arr;

	orig_arr = (unsigned char *) arr;
	while (n--)
	{
		if (*orig_arr == (unsigned char) c)
			return (orig_arr);
		orig_arr++;
	}
	return (NULL);
}
