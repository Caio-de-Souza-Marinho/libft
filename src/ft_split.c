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


static int	word_count(char const *str, char c);

char	**ft_split(char const *s, char c)
{
	int	words;

	words = word_count(s, c);
}

static int	word_count(char const *str, char c)
{
	int	count;
	int	x;
	int	i;

	count = 0;
	x = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (str[i] == c) 
			x = 0;
		i++;
	}
	return (count);
}
