/* ************************************************************************** */
/*                                                                            */
/*                                                What did you know about     */
/*   ft_print_comb.c                               SADNESS  _  _  ____        */
/*                                                         | || ||___ |       */
/*   By: aleener <alexleener@gmail.com>             ______ | || |_ __) |      */
/*                                                 |______||__   _/ __/       */
/*   Created: 2016/12/14 12:55:21 by aleener                  |_||_____|      */
/*   Updated: 2016/12/14 15:27:44 by aleener      UNIT Factory                */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = 47;
	while (first++ <= '7')
	{
		second = first;
		while (++second <= '8')
		{
			third = second;
			while (++third <= '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				if (first != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	ft_putchar('\n');
	return (0);
}
