/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:53:26 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/14 12:59:13 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	nbr_words(char *s, char *sep)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (is_charset(s[i], sep))
		i++;
	if (s[i])
	{
		nb = 1;
		while (s[i])
		{
			if (is_charset(s[i], sep) && !is_charset(s[i + 1], sep) && s[i + 1])
				nb++;
			i++;
		}
	}
	return (nb);
}

char	*ft_strcpy(char **s, char *sep)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (*(*s + i) && !is_charset(*(*s + i), sep))
	{
		i++;
	}
	str = (char *)malloc((i + 1) * sizeof(char));
	j = 0;
	while (j < i)
	{
		str[j] = **s;
		(*s)++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**ch;
	int		nb;
	int		i;

	nb = nbr_words(str, charset);
	ch = (char **)malloc((nb + 1) * sizeof(char *));
	if (!ch)
		return (0);
	i = 0;
	while (i < nb)
	{
		while (*str && is_charset(*str, charset))
			str++;
		ch[i] = ft_strcpy(&str, charset);
		i++;
	}
	ch[i] = (char *)malloc(1 * sizeof(char));
	ch[i] = NULL;
	return (ch);
}
