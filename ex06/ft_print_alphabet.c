/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_alphabet.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/01 16:10:03 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/01 16:10:05 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		ft_putchar(x);
		x++;
	}
}
