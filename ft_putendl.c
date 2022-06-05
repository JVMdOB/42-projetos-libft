/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia-de <jmaia-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:01:28 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/05/06 17:10:21 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD
#include "libft.h"
=======
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
>>>>>>> 91915bb06befd077339a5d28fd04e2f6f9de7c68

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
