/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:24:25 by caide-so          #+#    #+#             */
/*   Updated: 2024/10/25 18:55:39 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c);
static char	*fill_word(char const *s, int start, int end);
static void	*ft_free(char **strs, int count);

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	int		j;
	int		start_word;

	i = 0;
	j = 0;
	start_word = -1;
	res = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start_word < 0)
			start_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start_word >= 0)
		{
			res[j] = fill_word(s, start_word, i);
			if (!(res[j++]))
				return (ft_free(res, j - 1));
			start_word = -1;
		}
		i++;
	}
	return (res);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*fill_word(char const *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static int	word_count(char const *s, char c)
{
	int	count;
	int	i;
	int	x;

	count = 0;
	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (s[i] == c)
			x = 0;
		i++;
	}
	return (count);
}
