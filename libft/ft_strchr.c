/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:02:15 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/14 19:17:58 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	symb;

	symb = (char) ch;
	while (*str != '\0')
	{
		if (*str == symb)
			return ((char *) str);
		str++;
	}
	if (symb == '\0')
		return ((char *) str);
	return (NULL);
}
