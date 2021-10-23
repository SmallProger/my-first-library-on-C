/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:19:16 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/14 18:57:15 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int			length_little;
	int			i;
	const char	*result;

	i = 0;
	length_little = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *) big);
	while (*big != '\0' && len--)
	{
		if (*big == *little)
		{
			result = big;
			while (i < length_little && *big == little[i])
			{
				big++;
				i++;
			}
			if (i == length_little)
				return ((char *) result);
			i = 0;
		}
		big++;
	}
	return (NULL);
}
