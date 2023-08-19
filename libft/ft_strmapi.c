/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:03:30 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 20:32:33 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	int		i;
	int		k;

	i = 0;
	while (s[i])
		i++;
	string = malloc(sizeof(char) * (i + 1));
	if (string == NULL)
		return (NULL);
	k = 0;
	while (s[k])
	{
		string[k] = f(k, s[k]);
		k++;
	}
	string[k] = '\0';
	return (string);
}
