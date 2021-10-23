/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarrell <mdarrell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:04:39 by mdarrell          #+#    #+#             */
/*   Updated: 2021/10/14 18:55:55 by mdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static int	ft_getamount_words(char const *s, char c)
{
	int	amount_words;

	amount_words = 0;
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s != c)
			amount_words++;
		while (*s && *s != c)
			s++;
	}
	return (amount_words);
}

static int	*ft_getlen_words(char const *s, char c, int amount_words)
{
	int	*result;
	int	length_word;
	int	q;

	q = 0;
	length_word = 1;
	result = (int *) malloc(sizeof(int) * amount_words);
	if (!result)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			length_word++;
			s++;
		}
		result[q] = length_word;
		length_word = 1;
		q++;
	}
	return (result);
}

static void	ft_clean_arr(char **arr, int len_arr)
{
	int	i;

	i = 0;
	while (i < len_arr)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		*lengths;
	int		amount_words;

	i = 0;
	amount_words = ft_getamount_words(s, c);
	result = (char **) malloc(sizeof(char *) * amount_words);
	lengths = ft_getlen_words(s, c, amount_words);
	if (result == NULL || lengths == NULL)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			result[i] = (char *) malloc(sizeof(char) * lengths[i]);
			if (result[i] == NULL)
				ft_clean_arr(result, i);
			ft_strlcpy(result[i], s, lengths[i]);
			s = s + lengths[i++] - 1;
		}
	}
	result[i] = 0;
	free(lengths);
	return (result);
}
