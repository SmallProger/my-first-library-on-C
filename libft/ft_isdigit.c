/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 23:02:51 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/06 23:02:51 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int digit)
{
	if (48 <= digit && digit <= 57)
		return (1);
	return (0);
}