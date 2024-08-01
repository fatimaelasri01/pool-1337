/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:37:20 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/13 13:37:09 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	k;

	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = (int *)malloc((max - min) * sizeof(int));
	if (!range[0])
		return (-1);
	i = min;
	k = 0;
	while (i < max)
	{
		range[0][k] = i;
		i++;
		k++;
	}
	return (max - min);
}
