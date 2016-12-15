/* ************************************************************************** */
/*                                                                            */
/*                                                What did you know about     */
/*   ft_putnbr.c                                   SADNESS  _  _  ____        */
/*                                                         | || ||___ |       */
/*   By: aleener <alexleener@gmail.com>             ______ | || |_ __) |      */
/*                                                 |______||__   _/ __/       */
/*   Created: 2016/12/15 14:31:00 by aleener                  |_||_____|      */
/*   Updated: 2016/12/15 15:30:13 by aleener      UNIT Factory                */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{/*integer values: from −2147483648 to 2147483647;*/
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	n = nb;
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(atoi(argv[1]));
		return (0);
	}
	else
	return (0);
}
