/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syeresko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:31:32 by syeresko          #+#    #+#             */
/*   Updated: 2019/08/12 19:49:53 by syeresko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

static int	compute_offset(int n)
{
	int const	k = (n + 1) / 2 - 1;

	if (n == 1)
	{
		return (0);
	}
	if (n % 2)
	{
		return (k * (k + 3));
	}
	return (k * (k + 3) + k + 2);
}

int		g_m;
int		g_c;
int		g_left;
int		g_right;

static void	print_line(int n, int s, int t)
{
	int		i;

	i = 0;
	while (i < g_left)
	{
		ft_putchar(' ');
		++i;
	}
	ft_putchar('/');
	++i;
	while (i < g_right)
	{
		if (s < n || t <= 3 - n % 2 || i < g_m - g_c || i > g_m + g_c)
			ft_putchar('*');
		else if (n > 4 && t == n + 2 - g_c && i == g_m - 1 + g_c)
			ft_putchar('$');
		else
			ft_putchar('|');
		++i;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

static void	print_storey(int n, int s)
{
	int		t;

	t = 1;
	while (t < s + 3)
	{
		print_line(n, s, t);
		++t;
		--g_left;
		++g_right;
	}
}

void		sastantua(int n)
{
	int		s;

	g_m = n * (n + 5) / 2 + compute_offset(n);
	g_c = (n - 1) / 2;
	g_left = g_m - 1;
	g_right = g_m + 1;
	s = 1;
	while (s <= n)
	{
		print_storey(n, s);
		g_left -= 1 + (s + 1) / 2;
		g_right += 1 + (s + 1) / 2;
		++s;
	}
}