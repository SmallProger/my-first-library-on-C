/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 22:48:55 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/14 19:29:36 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

void	ft_putnbr_fd(int n, int fd)
{
	int		amount_dig;
	char	str[13];
	int		i;

	i = 0;
	amount_dig = ft_getamount_dig(n);
	if (n == -2147483648)
		ft_strlcpy(str, "-2147483648", amount_dig);
	else
	{
		if (n < 0)
			ft_push_num(str, -n, amount_dig, 1);
		else
			ft_push_num(str, n, amount_dig, 0);
	}
	while (amount_dig--)
	{
		write(fd, &(str[i]), 1);
		i++;
	}
}
