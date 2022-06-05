/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia-de <jmaia-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:44:14 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/05/06 17:02:23 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD
#include "libft.h"

void	ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
=======
#include <unistd.h>

int		ft_strlen(char const *s);

void	ft_putstr(char const *s)
{
	int	len;

	len = ft_strlen(s);
	write(1, s, len);
>>>>>>> 91915bb06befd077339a5d28fd04e2f6f9de7c68
}
