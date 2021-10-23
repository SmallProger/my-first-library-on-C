/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:25:18 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/14 19:24:31 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_skip_spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

static int	ft_get_num(const char *str, int i, int minus)
{
	int	length;
	int	result;

	result = 0;
	while (ft_isdigit(str[i]) && str[i] != '\0')
	{
		result = (str[i] - 48) + result * 10;
		i++;
	}
	return (result * minus);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	length;

	length = ft_strlen(str);
	minus = 1;
	i = ft_skip_spaces(str);
	while (!ft_isdigit(str[i]))
	{
		if (str[i] == '+' && str[i + 1] == '-')
			i++;
		else if (str[i] == '-')
		{
			i++;
			minus *= -1;
		}
		else
			return (0);
	}
	return (ft_get_num(str, i, minus));
}
