/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:44:40 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/09 12:29:56 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_errors(char	*base)
{
	int		i;
	int		j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	put_nbr(int long n, char *base, long int len)
{
	if (n < len)
		ft_putchar(base[n]);
	else
	{
		put_nbr(n / len, base, len);
		ft_putchar(base[n % len]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			i;
	long int	len;

	i = check_errors(base);
	if (i)
	{
		n = nbr;
		len = ft_strlen(base);
		if (n < 0)
		{
			ft_putchar('-');
			n = n * (-1);
		}
		put_nbr(n, base, len);
	}
}
