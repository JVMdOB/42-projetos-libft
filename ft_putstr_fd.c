/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: jmaia-de <jmaia-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:22:31 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/06/02 12:30:14 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
=======
/*   By: jmaia-de <jvmdob@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:22:31 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/05/14 19:58:09 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char const *s);
>>>>>>> 91915bb06befd077339a5d28fd04e2f6f9de7c68

void	ft_putstr_fd(char const *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
}
