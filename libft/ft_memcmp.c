/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:30:34 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/17 18:05:18 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t			i;
	unsigned char	*unschar_arr1;
	unsigned char	*unschar_arr2;

	unschar_arr1 = (unsigned char *) arr1;
	unschar_arr2 = (unsigned char *) arr2;
	i = 0;
	if (ft_strlen(arr1) == 0 && ft_strlen(arr2) == 0)
		return (0);
	while (n--)
	{
		if ((*(unschar_arr1 + i)) - (*(unschar_arr2 + i)))
			return ((*(unschar_arr1 + i)) - (*(unschar_arr2 + i)));
		i++;
	}
	return (0);
}
