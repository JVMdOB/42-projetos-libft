/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia-de <jmaia-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:24:08 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/05/06 17:27:10 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;
=======
int	ft_strlen(const char *s)
{
	int	size;
>>>>>>> 91915bb06befd077339a5d28fd04e2f6f9de7c68

	size = 0;
	while (*s)
	{
		size++;
		s++;
	}
	return (size);
}
