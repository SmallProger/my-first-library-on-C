/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:04:16 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/23 15:04:16 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../libft/libft.h"
#include <stdio.h>

static int	ft_change_res(int n)
{
	if (n > 0)
		return (1);
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
}
static void		ft_print_result(int n, int arg)
{
	if (arg == 1)
		printf("res: %s\n", ft_change_res(n) == 0 ? "SUCCESS" : "FAIL");
	else if (arg == 2)
		printf("res: %s\n", ft_change_res(n) == 1 ? "SUCCESS" : "FAIL");
	else if (arg == 3)
		printf("res: %s\n", ft_change_res(n) == 1 ? "SUCCESS" : "FAIL");
	else if (arg == 4)
		printf("res: %s\n", ft_change_res(n) == 1 ? "SUCCESS" : "FAIL");
	else if (arg == 5)
		printf("res: %s\n", ft_change_res(n) == -1 ? "SUCCESS" : "FAIL");
	else if (arg == 6)
		printf("res: %s\n", ft_change_res(n) == 1 ? "SUCCESS" : "FAIL");
	else if (arg == 7)
		printf("res: %s\n", ft_change_res(n) == 0 ? "SUCCESS" : "FAIL");
	else if (arg == 8)
		printf("res: %s\n", ft_change_res(n) == -1 ? "SUCCESS" : "FAIL");
	else if (arg == 9)
		printf("res: %s\n", ft_change_res(n) == 0 ? "SUCCESS" : "FAIL");
}

int				main(int argc, const char *argv[])
{
	int		arg;

	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_memcmp("salut", "salut", 5), arg);
	else if (arg == 2)
		ft_print_result(ft_memcmp("t\200", "t\0", 2), arg);
	else if (arg == 3)
		ft_print_result(ft_memcmp("testss", "test", 5), arg);
	else if (arg == 4)
		ft_print_result(ft_memcmp("test", "tEst", 4), arg);
	else if (arg == 5)
		ft_print_result(ft_memcmp("", "test", 4), arg);
	else if (arg == 6)
		ft_print_result(ft_memcmp("test", "", 4), arg);
	else if (arg == 7)
		ft_print_result(ft_memcmp("abcdefghij", "abcdefgxyz", 7), arg);
	else if (arg == 8)
		ft_print_result(ft_memcmp("abcdefgh", "abcdwxyz", 6), arg);
	else if (arg == 9)
		ft_print_result(ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0), arg);
	return (0);
}
