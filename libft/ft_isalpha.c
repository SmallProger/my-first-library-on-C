/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:47:37 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/06 20:47:37 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int alpha)
{
	if (65 <= alpha && alpha <= 90)
		return (1);
	else if (97 <= alpha && alpha <= 122)
		return (1);
	return (0);
}
