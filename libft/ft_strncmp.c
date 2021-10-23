/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:45:09 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/08 10:45:09 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cmp_char(const char s1, const char s2)
{
	unsigned char	sym1;
	unsigned char	sym2;

	sym1 = (unsigned char) s1;
	sym2 = (unsigned char) s2;
	return (sym1 - sym2);
}

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (ft_strlen(str1) == 0 && ft_strlen(str2) == 0)
		return (0);
	else if (ft_strlen(str1) == 0 && ft_strlen(str2) != 0)
		return (-1);
	else if (ft_strlen(str1) != 0 && ft_strlen(str2) == 0)
		return (1);
	while (n-- && str1[i] != '\0' && str2[i] != '\0')
	{
		if (cmp_char(str1[i], str2[i]) < 0)
			return (-1);
		else if (cmp_char(str1[i], str2[i]) > 0)
			return (1);
		i++;
	}
	return (0);
}
