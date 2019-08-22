/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syeresko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:31:32 by syeresko          #+#    #+#             */
/*   Updated: 2019/08/15 20:57:46 by syeresko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	sastantua(int n)
{
               int				//        int
              c=(n-				//       z,k,s
             1)/2,m=			//      =1,l,
          (n%2?0:c+2)+n			//   c=(n-1)/2,m=n
         *(n+5)/2+(c+3)*		//  *(n+5)/2+(c+3)*
        c,l=m,s=1,z,k;for		// c+(n%2?0:c+2);for
       (;s<=n;l-=++s/2)for		//(l=m;s<=n;l-=++s/2)
    (z=s+3;--l,--z;)/*{for(k=m;
   l-m-k;--k)ft_putchar(k>m-l?
  32:m-l-k?s<n|z>=n+n%2|k<-c|k>
 c?42:5>n||z-c-1|1-c-k?124:36:47
);ft_putchar(92);ft_putchar(10);}

for(k=m;l-m-k-2;--k)
	ft_putchar(
			m-l-k
				?k<m-l	// (A) k < m - l:
					?k==l-m-1
						?10
						:k==l-m
							?92
							:s<n|z>=n+n%2|k<-c|k>c?42:5>n||z-c-1|1-c-k?124:36
					:32	// (B) k > m - l
				:47		// (C) k == m - l
	);*/
    for(k=
   m;l-m-k-2;--k)ft_putchar(m-l
  -k?k<m-l?k==l-   m-1?10:k==l-m
 ?92:s<n|z>=n+n%   2|k<-c|k>c?42:
5>n||z-c-1|1-c-k   ?124:36:32:47);
/*syeresko*/
}

ft_putchar(
		m-l-k
			?k<m-l	// (A) k < m - l:
				?l-m-k-1
					?l-m-k
						?s<n|z>=n+n%2|k<-c|k>c
							?42
							:5>n||z-c-1|1-c-k
								?124
								:36
						:92	// k == l - m
					:10		// k == l - m - 1
				:32	// (B) k > m - l
			:47		// (C) k == m - l
);
