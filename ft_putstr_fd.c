/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia-de <jvmdob@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:22:31 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/05/14 19:58:09 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char const *s);

void	ft_putstr_fd(char const *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
}
