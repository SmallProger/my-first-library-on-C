/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:28:57 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/23 14:28:57 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>
#include <unistd.h>
//check mem*.c
static void		check_memset(void *mem, int c, int n, int mem_size, int arg)
{
	if (mem != ft_memset(mem, c, n))
		write(1, "mem's adress was not returned\n", 30);
	write(1, mem, mem_size);
	if (arg == 1)
		printf("\norig res:\ncccccjjjjjjjjjj\n");
	else if (arg == 2)
		printf("\norig res:\nccccccccccccccj\n");
	else if (arg == 3)
	{
		printf("\norig res:\n");
		printf("\n\n\n\n\n\njjjjjjjjj");
	}
	else if (arg == 4)
		printf("\norig res:\njjjjjjjjjjjjjj\n");
	free(mem);
}

int				main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;
	int		mem_size;

	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)) || argc == 1)
		return (0);
	memset(mem, 'j', mem_size);
	if ((arg = atoi(argv[1])) == 1)
		check_memset(mem, 'c', 5, mem_size, 1);
	else if (arg == 2)
		check_memset(mem, 'c', 14, mem_size, 2);
	else if (arg == 3)
		check_memset(mem, '\n', 6, mem_size, 3);
	else if (arg == 4)
		check_memset(mem, '\0', 1, mem_size, 4);
	return (0);
}
