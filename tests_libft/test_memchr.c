/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:31:57 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/23 15:31:57 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../libft/libft.h"
#include <stdio.h>

static void		ft_print_result(const char *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_memchr(void *s, char c, int n)
{
	const char *str;

	str = ft_memchr(s, c, n);
	if (!str)
		ft_print_result("NULL");
	else
		ft_print_result(str);
}

int				main(int argc, const char *argv[])
{
	int			arg;

	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_memchr("bonjour", 'b', 4);
	else if (arg == 2)
		check_memchr("bonjour", 'o', 7);
	else if (arg == 3)
		check_memchr("bonjourno", 'n', 2);
	else if (arg == 4)
		check_memchr("bonjour", 'j', 6);
	else if (arg == 5)
		check_memchr("bonjour", 's', 7);
	else if (arg == 6)
	{
		int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

		printf("%s", (char *)ft_memchr(tab, -1, 7));
	}
	return (0);
}
