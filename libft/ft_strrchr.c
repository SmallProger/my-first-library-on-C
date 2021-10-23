/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:15:27 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/20 19:15:27 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	symb;
	int		i;

	i = ft_strlen(str);
	symb = (char) ch;
	while (i != 0)
	{
		if (str[i] == symb)
			return ((char *)(str + i));
		i--;
	}
	if (symb == '\0')
		return ((char *) str);
	return (NULL);
}
