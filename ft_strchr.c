/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia-de <jmaia-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:32:32 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/05/06 17:54:53 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*p_null;
	int		i;
	char	*new;

	i = 0;
	c = (char) c;
	p_null = (void *) 0;
	new = (char *) s;
	while (new[i])
	{
		if (new[i] == c)
		{
			return (&new[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&new[i]);
	return (p_null);
}
