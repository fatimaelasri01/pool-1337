/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:07:59 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/17 18:21:47 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ch;
	int		i;

	i = 0;
	while (src[i])
		i++;
	ch = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		ch[i] = src[i];
		i++;
	}
	ch[i] = '\0';
	return (ch);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	i = 0;
	res = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	while (i < ac)
	{
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		res[i].size = ft_strlen(av[i]);
		i++;
	}
	res[i].str = 0;
	res[i].size = 0;
	res[i].copy = 0;
	return (res);
}
