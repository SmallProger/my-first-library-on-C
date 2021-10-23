/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:25:28 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/23 15:25:28 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "../libft/libft.h"

static void		check_memcpy(void *dest, void *src, int n, int arg)
{
	if (dest != ft_memcpy(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	if (arg == 1)
		printf("orig res:\nzyxwvutsrqponmjjjjjjjjjjjjjjjj\n");
	else if (arg == 2)
		printf("orig res:\njjjjjjjjjjjjjjjjjjjjjjjjjjjjjj\n");
	else if (arg == 3)
		printf("orig res:\nzyxwvutjjjjjjjjjjjjjjjjjjj\n");
	write(1, dest, 30);
	free(dest);
}

int				main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;

	if (!(mem = malloc(sizeof(*mem) * 30)) || argc == 1)
		return (0);
	memset(mem, 'j', 30);
	if ((arg = atoi(argv[1])) == 1)
		check_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14, arg);
	else if (arg == 2)
		check_memcpy(mem, "zyxwvutst", 0, arg);
	else if (arg == 3)
		check_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11, arg);
	return (0);
}
