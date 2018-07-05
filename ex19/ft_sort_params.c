/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_params.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 16:26:49 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/04 21:25:22 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] || s2[x])
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int x;

	x = 1;
	while (x < ac - 1)
	{
		if (ft_strcmp(av[x], av[x + 1]) > 0)
		{
			ft_swap(av[x], av[x + 1]);
			x = 1;
		}
		else
			x++;
	}
	x = 1;
	while (av[x])
	{
		ft_putstr(av[x]);
		ft_putchar('\n');
		x++;
	}
}
