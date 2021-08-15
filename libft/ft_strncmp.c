/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagonza <amagonza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:52:06 by amagonza          #+#    #+#             */
/*   Updated: 2021/08/11 15:00:12 by amagonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	else
	{
		while ((*s1 || *s2) && n > 0)
		{
			if (*s1 != *s2)
			{
				return ((unsigned char)*s1 - (unsigned char) *s2);
			}
			n--;
			s1++;
			s2++;
		}
	}
	return (0);
}
