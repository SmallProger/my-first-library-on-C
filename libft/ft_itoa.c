/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:51:54 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/14 19:33:03 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

static int	ft_getamount_dig(int n)
{
	int	len_int;

	len_int = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len_int++;
		n = -n;
	}
	while (n)
	{
		n = n / 10;
		len_int++;
	}
	return (len_int);
}

static void	ft_push_num(char *result, int n, int amount_dig, int flag)
{
	if (n != 0)
	{
		while (n)
		{
			result[amount_dig - 1] = n % 10 + '0';
			n = n / 10;
			amount_dig--;
		}
		if (flag)
			result[0] = '-';
	}
	else
		result[0] = '0';
}

char	*ft_itoa(int n)
{
	char	*result;
	int		amount_dig;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	amount_dig = ft_getamount_dig(n);
	result = (char *) malloc(sizeof(char) * (amount_dig + 1));
	if (result == NULL)
		return (NULL);
	if (n < 0)
		ft_push_num(result, -n, amount_dig, 1);
	else if (n > 0)
		ft_push_num(result, n, amount_dig, 0);
	else
		ft_push_num(result, 0, amount_dig, 0);
	result[amount_dig] = 0;
	return (result);
}
