/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:01:33 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 20:10:28 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int		i;
	int		trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*ft_word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	int			flag;
	char		**split;

	split = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	flag = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && flag < 0)
			flag = i;
		else if ((s[i] == c || i == ft_strlen(s)) && flag >= 0)
		{
			split[j++] = ft_word_dup(s, flag, i);
			flag = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
