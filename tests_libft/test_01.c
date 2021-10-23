/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:03:28 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/23 14:03:28 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft/libft.h"
#include <stdio.h>
//check is*.c
static void	print_result(int flag)
{
	if (flag)
		printf("SUCCESS\n");
	else
		printf("FAIL\n");
}

int main()
{
	print_result(ft_isascii('a'));
	print_result(!ft_isascii(138));
	print_result(ft_isascii('@'));
	print_result(ft_isascii('#'));
	print_result(!ft_isalnum('#'));
	print_result(!ft_isalnum('$'));
	print_result(!ft_isalnum(138));
	print_result(ft_isalnum('A'));
	print_result(ft_isalnum('a'));
	print_result(!ft_isdigit('a'));
	print_result(!ft_isdigit('A'));
	print_result(ft_isdigit('7'));
	print_result(!ft_isdigit('#'));
	print_result(ft_isalpha('a'));
	print_result(!ft_isalpha('#'));
	print_result(!ft_isalpha('8'));
	print_result(ft_isalpha('A'));
	print_result(!ft_isalpha('/'));
	print_result(!ft_isprint(128));
	print_result(ft_isprint('A'));
	print_result(ft_isprint('B'));
	print_result(ft_isprint('$'));
	return (0);
}
