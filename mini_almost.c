/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syeresko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:31:32 by syeresko          #+#    #+#             */
/*   Updated: 2019/08/15 20:24:01 by syeresko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	sastantua(int n)
{
                    int
                   c,m,l,
                  r,s,z,i;
               c=(n-1)/2;m=n
              *(n+5)/2+(n%2?0
             :c+2)+c*(c+3);l=m
            -1;r=m+1;for(s=1;<=
           n;++s,l-=1+s/2,r+=1+s
        /2)for(z=s+3;--z;--l,++r){
       for(i=0;i<r;++i)ft_putchar(i<l
      ?32:i==l?47:s<n||z>=n+n%2|i<m-c
     |i>m+c?42:n<5||z-c-1|m-1+c-i?124:
    36);ft_putchar(92);ft_putchar(10);}
}
