/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:37:42 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/09 13:37:42 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_exist(char symb, char const *set)
{
	while (*set != '\0')
	{
		if (*set == symb)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	end;
	size_t	start;

	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] != '\0' && ft_check_exist(s1[start], set))
		start++;
	if (start - 1 == end)
	{
		result = (char *) malloc(sizeof(char) * 1);
		result[0] = 0;
		return (result);
	}
	while (end != 0 && ft_check_exist(s1[end], set))
		end--;
	result = ft_substr(s1, start, end - start + 1);
	if (result == NULL)
		return (NULL);
	return (result);
}
