/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:50:01 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/08 20:50:01 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_of_elements, size_t size_of_element)
{
	char	*result;

	if (size_of_element == 0 || num_of_elements == 0)
		return (NULL);
	result = (void *) malloc(sizeof(char) * size_of_element * num_of_elements);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, num_of_elements * size_of_element);
	return (result);
}
