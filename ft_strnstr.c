/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagonza <amagonza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 19:59:10 by amagonza          #+#    #+#             */
/*   Updated: 2021/08/12 16:49:17 by amagonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	if (len <= 0)
		return (NULL);
	while ((i < len) && (big[i] != '\0'))
	{
		while (big[i] == little[j] && (i < len) && little[j])
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i - j]);
		else
			i -= j;
		j = 0;
		i++;
	}
	return (NULL);
}
