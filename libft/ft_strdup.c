/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:42:22 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/09 12:42:22 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		length;
	char	*result;
	int		amount_copied;

	length = ft_strlen(str);
	result = (char *) malloc(sizeof(char) * length + 1);
	if (result == NULL)
		return (NULL);
	amount_copied = ft_strlcpy(result, str, length + 1);
	if (amount_copied != length)
		return (NULL);
	return (result);
}
