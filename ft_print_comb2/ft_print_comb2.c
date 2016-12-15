/* ************************************************************************** */
/*                                                                            */
/*                                                What did you know about     */
/*   ft_print_comb2.c                              SADNESS  _  _  ____        */
/*                                                         | || ||___ |       */
/*   By: aleener <alexleener@gmail.com>             ______ | || |_ __) |      */
/*                                                 |______||__   _/ __/       */
/*   Created: 2016/12/14 15:43:36 by aleener                  |_||_____|      */
/*   Updated: 2016/12/15 14:25:06 by aleener      UNIT Factory                */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = -1;
	while (++first <= 98)
	{
		second = first;
		while (++second <= 99)
		{
			ft_putchar(first / 10 + '0');
			ft_putchar(first % 10 + '0');
			ft_putchar(' ');
			ft_putchar(second / 10 + '0');
			ft_putchar(second % 10 + '0');
			if (first != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
