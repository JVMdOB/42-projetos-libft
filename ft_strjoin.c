/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia-de <jmaia-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:57:45 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/06/02 14:53:00 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	size1;
	size_t	size2;
	int		i;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	join = ft_strnew(size1 + size2);
	i = 0;
	while (i < size1)
	{
		join[i] = s1[i];
		i++;
	}
	while (i < size1 + size2)
	{
		join[i] = s2[i - size1];
		i++;
	}
	return (join);
}
