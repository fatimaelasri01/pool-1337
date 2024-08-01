/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:34:01 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/09 11:38:10 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size == 0)
		return (s);
	else if (size < d)
		return (size + s);
	else
	{
		i = 0;
		while (src[i] && (d + i) < (size - 1))
		{
			dest[d + i] = src[i];
			i++;
		}
		dest[d + i] = '\0';
	}
	return (d + s);
}
