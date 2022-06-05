/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia-de <jmaia-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:55:57 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/05/06 17:59:19 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD
#include "libft.h"

=======
>>>>>>> 91915bb06befd077339a5d28fd04e2f6f9de7c68
char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;
	char	*new;

	i = 0;
	c = (char) c;
	p = (void *) 0;
	new = (char *) s;
	while (new[i])
	{
		if (new[i] == c)
			p = &new[i];
		i++;
	}
	if (c == '\0')
		p = &new[i];
	return (p);
}
