/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:15:39 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/04 12:42:48 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str)
{
	char	*p;

	p = str;
	while (*p)
	{
		if (*p >= 'A' && *p <= 'Z')
			*p = *p + 32;
		p++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*c;
	int		on_mot;

	c = str;
	on_mot = 0;
	c = ft_lowcase(c);
	while (*c)
	{
		if ((*c < 'a' || *c > 'z') && (*c < '0' || *c > '9'))
			on_mot = 0;
		else if ((*c >= 'a' && *c <= 'z') && on_mot == 0)
		{
			*c = *c - 32;
			on_mot++;
		}
		else
			on_mot++;
		c++;
	}
	return (str);
}
