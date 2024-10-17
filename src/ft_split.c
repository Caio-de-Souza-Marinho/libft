/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:24:25 by caide-so          #+#    #+#             */
/*   Updated: 2024/10/16 21:45:33 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	count_words(char const *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**res;
	int	words;

	res = (char **)malloc(count_words(s, c) + 1 * sizeof(char *));
	if (!res)
		return (NULL);
	// TODO: extract substrings
	// TODO: free all memory
}

static int	count_words(char const *str, char delimiter)
{
	int	count;
	int	x;
	int	i;

	count = 0;
	x = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != delimiter && x == 0)
		{
			x = 1;
			count++;
		}
		else if (str[i] == delimiter) 
			x = 0;
		i++;
	}
	return (count);
}
