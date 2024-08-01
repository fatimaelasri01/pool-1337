/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:07:56 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/15 10:19:50 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// not valide

#include <stdlib.h>

int	ft_strlen(char *str);
int	check_base(char	*base);
int	check_index(char c, char *base);
int	ft_atoi_base(char *str, char *base);

char	*revstr(char *str)
{
	int		i;
	int		l;
	char	tmp;

	if (str[0] == '-')
		i = 1;
	else
		i = 0;
	l = ft_strlen(str) - 1;
	while (i < l)
	{
		tmp = str[i];
		str[i] = str[l];
		str[l] = tmp;
		i++;
		l--;
	}
	return (str);
}

char	*charcpy(char *ch, char c, int i)
{
	ch[i] = c;
	return (ch);
}

void	convert(long int nb, char *ch, char *base, int i)
{
	int	len;

	len = ft_strlen(base);
	if (nb < len)
	{
		i++;
		ch = charcpy(ch, base[nb], i);
	}
	else
	{
		i++;
		convert(nb / len, ch, base, i);
		ch = charcpy(ch, base[nb % len], i);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	n;
	char		*nb;
	int			i;

	i = -1;
	if (check_base(base_from) && check_base(base_to))
	{
		n = ft_atoi_base(nbr, base_from);
		nb = (char *)malloc(255 * sizeof(char));
		if (n < 0)
		{
			i++;
			nb = charcpy(nb, '-', i);
			n = n * (-1);
		}
		convert(n, nb, base_to, i);
		nb = revstr(nb);
		return (nb);
	}
	return (0);
}
