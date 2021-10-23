/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:19:06 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/09 13:19:06 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	q;
	char			*result;

	q = 0;
	i = start;
	result = (char *) malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (result);
	while (len-- && s[i] != '\0')
	{
		result[q] = s[i];
		q++;
		i++;
	}
	result[q] = '\0';
	return (result);
}
