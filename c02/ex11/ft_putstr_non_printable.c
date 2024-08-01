/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:21:40 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/04 15:16:25 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1); 
}

void	ft_hexa(unsigned char h)
{
	char	*ch;

	ch = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(ch[h / 16]);
	ft_putchar(ch[h % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			ft_putchar(*str);
		else
			ft_hexa(*str);
		str++;
	}
}
