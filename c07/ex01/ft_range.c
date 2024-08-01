/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:55:27 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/13 13:58:11 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	i;
	int	k;

	if (min >= max)
		t = NULL;
	else
	{
		t = (int *)malloc((max - min) * sizeof(int));
		i = min;
		k = 0;
		while (i < max)
		{
			t[k] = i;
			i++;
			k++;
		}
	}
	return (t);
}
