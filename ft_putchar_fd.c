/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: jmaia-de <jmaia-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:18:12 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/06/02 12:29:51 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
=======
/*   By: jmaia-de <jvmdob@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:18:12 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/05/14 18:21:28 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
>>>>>>> 91915bb06befd077339a5d28fd04e2f6f9de7c68

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
