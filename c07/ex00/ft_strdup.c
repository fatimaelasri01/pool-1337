/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:12:50 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/13 16:10:42 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
