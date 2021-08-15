/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagonza <amagonza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 00:43:51 by amagonza          #+#    #+#             */
/*   Updated: 2021/08/13 15:47:21 by amagonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int startn, size_t len)
{
	char			*sub;
	size_t			i;
	size_t			indx;

	i = 0;
	indx = 0;
	if (!s)
		return (NULL);
	if (startn > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	else if (ft_strlen(s) - startn > len)
		sub = malloc(len + 1);
	else
		sub = malloc(ft_strlen(s) - startn + 1);
	if (!sub)
		return (NULL);
	while (s[i] && indx < len)
	{
		if (i >= startn)
			sub[indx++] = s[i];
		i++;
	}
	sub[indx] = '\0';
	return (sub);
}
