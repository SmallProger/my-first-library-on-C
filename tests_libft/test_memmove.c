/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:57:35 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/23 14:57:35 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../libft/libft.h"
#include <stdio.h>

static void		check_memmove(void *dest, void *src, int n, int arg)
{
	if (dest != ft_memmove(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);
	if (arg == 1)
		printf("\norig res:\nconseipsum dolor sit a\n");
	else if (arg == 2)
		printf("\norig res:\nconsect dolor sit a\n");
	else if (arg == 3)
		printf("\norig res:\nlorem ipum dolor sit a\n");
	else if (arg == 4)
		printf("\norig res:\norem ipssum dolor sit\n");
	else if (arg == 5)
		printf("\norig res:\nlorem ipsum dolor sit\n");
	free(dest);
}

int				main(int argc, const char *argv[])
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	int		arg;

	dest = src + 1;
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_memmove(dest, "consectetur", 5, 1);
	else if (arg == 2)
		check_memmove(dest, "con\0sec\0\0te\0tur", 10, 2);
	else if (arg == 3)
		check_memmove(dest, src, 8, 3);
	else if (arg == 4)
		check_memmove(src, dest, 8, 4);
	else if (arg == 5)
		check_memmove(src, dest, 0, 5);
	return (0);
}
