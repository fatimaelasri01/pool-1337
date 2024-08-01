/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:58:46 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/14 20:28:45 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*copystr(char *ch, char **strs, char *sep, int size)
{
	char	*res;
	int		i;
	int		j;

	res = ch;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			*ch = strs[i][j];
			ch++;
			j++;
		}
		j = 0;
		while (sep[j++] && i < size - 1)
		{
			*ch = sep[j - 1];
			ch++;
		}
		i++;
	}
	*ch = '\0';
	return (res);
}

int	len_ma(char **str, int size)
{
	int	i;
	int	j;
	int	cpt;

	i = 0;
	cpt = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			cpt++;
		}
		i++;
	}
	return (cpt);
}

int	len_ar(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		ls;
	int		lsep;
	char	*ch;

	if (size == 0)
	{
		ch = (char *)malloc(sizeof(char));
		*ch = '\0';
	}
	else
	{
		ls = len_ma(strs, size);
		lsep = len_ar(sep);
		ch = malloc(((lsep * (size - 1)) + ls + 1) * sizeof(char));
		ch = copystr(ch, strs, sep, size);
	}
	return (ch);
}
