/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:37:11 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/13 21:37:11 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int				length;
	unsigned int	i;

	i = 0;
	length = ft_strlen(s);
	while (i < length)
	{
		f(i, &(s[i]));
		i++;
	}
}
