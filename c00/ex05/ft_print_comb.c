#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	h_nbr;
	char	t_nbr;
	char	o_nbr;

	h_nbr = '0';
	while (h_nbr <= '7')
	{
		t_nbr = h_nbr + 1;
		while (t_nbr <= '8')
		{
			o_nbr = t_nbr + 1;
			while (o_nbr <= '9')
			{
				print_comb(h_nbr, t_nbr, o_nbr);
				o_nbr ++;
			}
			t_nbr ++;
		}
		h_nbr ++;
	}
}