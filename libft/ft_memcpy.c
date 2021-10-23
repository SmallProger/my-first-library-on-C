/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:05:28 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/17 17:45:14 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	const char	*orig;
	int			i;
	char		*copy;

	i = 0;
	if (destination == NULL && source == NULL)
		return (NULL);
	copy = (char *) destination;
	orig = (const char *) source;
	while (n--)
	{
		*(copy + i) = *(orig + i);
		i++;
	}
	return (destination);
}
