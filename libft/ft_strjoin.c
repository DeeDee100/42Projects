/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagonza <amagonza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 01:03:06 by amagonza          #+#    #+#             */
/*   Updated: 2021/08/10 18:16:02 by amagonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	int		c;
	char	*result;

	i = 0;
	c = 0;
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = malloc((len2 + len1 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s1[i])
		result[c++] = s1[i++];
	i = 0;
	while (s2[i])
		result[c++] = s2[i++];
	result[c] = 0;
	return (result);
}
