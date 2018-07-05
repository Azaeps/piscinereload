/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_params.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 15:32:14 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/04 16:16:20 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		main(int ac, char **av)
{
	int x;

	x = 1;
	(void)ac;
	while (av[x])
	{
		ft_putstr(av[x]);
		ft_putchar('\n');
		x++;
	}
	return (0);
}
