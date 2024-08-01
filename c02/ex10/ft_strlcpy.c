/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:52:32 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/16 13:23:26 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	char				*p;
	unsigned int		len;

	p = src;
	len = 0;
	i = 0;
	while (*p)
	{
		len++;
		p++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	printf("%s", dest);
	return (len);
}
int main()
{
	int i;
	char *dest;
	char *src = "klm";
	dest = "abcd";
	i = ft_strlcpy(dest, src, 3);
	return 0;
}
