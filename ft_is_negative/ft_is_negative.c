/* ************************************************************************** */
/*                                                                            */
/*                                                What did you know about     */
/*   ft_is_negative.c                              SADNESS  _  _  ____        */
/*                                                         | || ||___ |       */
/*   By: aleener <alexleener@gmail.com>             ______ | || |_ __) |      */
/*                                                 |______||__   _/ __/       */
/*   Created: 2016/12/13 16:10:29 by aleener                  |_||_____|      */
/*   Updated: 2016/12/13 16:23:57 by aleener      UNIT Factory                */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P",1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_is_negative(atoi(argv[1]));
		return (0);
	}
	else
	{
		return (0);
	}
}
