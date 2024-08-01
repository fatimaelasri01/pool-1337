/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:11:03 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/13 19:00:07 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char	*base)
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

int	check_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	s;
	int	nb;
	int	len;

	nb = 0;
	s = 1;
	if (check_base(base))
	{
		len = ft_strlen(base);
		while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
			str++;
		while (*str && (*str == '-' || *str == '+'))
		{
			if (*str == '-')
				s = s * (-1);
			str++;
		}
		while (*str && (check_index(*str, base) != -1))
		{
			nb = (nb * len) + check_index(*str, base);
			str++;
		}
	}
	return (nb * s);
}
