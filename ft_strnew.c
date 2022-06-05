/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia-de <jmaia-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:46:24 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/06/02 13:00:50 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;
	int		i;

	res = (char *) malloc(size);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i++] = '\0';
	}
	res[i] = '\0';
	return (res);
}